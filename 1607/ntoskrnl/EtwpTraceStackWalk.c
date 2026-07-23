/*
 * XREFs of EtwpTraceStackWalk @ 0x14022944C
 * Callers:
 *     EtwpStackTraceDispatcher @ 0x140229210 (EtwpStackTraceDispatcher.c)
 *     EtwpStackWalkApc @ 0x140229350 (EtwpStackWalkApc.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x14004EE20 (RtlWalkFrameChain.c)
 *     KeQueryCurrentStackInformation @ 0x14004EF40 (KeQueryCurrentStackInformation.c)
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeGetCurrentStackPointer @ 0x14015E0C0 (KeGetCurrentStackPointer.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     EtwpGetStackLookasideListEntry @ 0x140229038 (EtwpGetStackLookasideListEntry.c)
 *     EtwpTraceStackKey @ 0x14022B004 (EtwpTraceStackKey.c)
 *     PsPicoWalkUserStack @ 0x140681490 (PsPicoWalkUserStack.c)
 */

void __fastcall EtwpTraceStackWalk(int a1, unsigned int a2, __int64 a3, __int64 *a4)
{
  int v6; // r12d
  PSLIST_ENTRY StackLookasideListEntry; // rdi
  void *v8; // rsp
  __int64 v9; // rbx
  ULONG v10; // r15d
  unsigned int v11; // r14d
  ULONG v12; // r8d
  ULONG v13; // ebx
  PVOID *v14; // rcx
  unsigned int v15; // r14d
  ULONG v16; // r15d
  unsigned int v17; // r14d
  unsigned int v18; // esi
  unsigned __int16 v19; // ax
  char v20; // [rsp+10h] [rbp-600h] BYREF
  int v21; // [rsp+610h] [rbp+0h] BYREF
  unsigned __int64 v22; // [rsp+618h] [rbp+8h] BYREF
  __int64 v23; // [rsp+620h] [rbp+10h]
  __int64 *v24; // [rsp+628h] [rbp+18h]
  __int64 v25; // [rsp+630h] [rbp+20h] BYREF
  int v26; // [rsp+638h] [rbp+28h]
  int v27; // [rsp+63Ch] [rbp+2Ch]
  unsigned __int64 v28; // [rsp+648h] [rbp+38h] BYREF
  __int64 *v29; // [rsp+650h] [rbp+40h] BYREF
  int v30; // [rsp+658h] [rbp+48h]
  int v31; // [rsp+65Ch] [rbp+4Ch]
  PSLIST_ENTRY v32; // [rsp+660h] [rbp+50h]
  int v33; // [rsp+668h] [rbp+58h]
  int v34; // [rsp+66Ch] [rbp+5Ch]

  v23 = a3;
  v24 = a4;
  if ( KeQueryCurrentStackInformation(&v21, &v22, &v28) && v21 && v21 != 5 )
  {
    v6 = 256;
    StackLookasideListEntry = EtwpGetStackLookasideListEntry();
    if ( !StackLookasideListEntry )
    {
      if ( (unsigned __int64)&KeGetCurrentStackPointer()[-v22] <= 0x1438 )
        return;
      v8 = alloca(1536LL);
      StackLookasideListEntry = (PSLIST_ENTRY)&v20;
      v6 = 192;
    }
    v9 = 0LL;
    v10 = 0;
    if ( (a2 & 0x800) != 0 )
    {
      v11 = (a2 >> 20) & 0xF;
      v12 = v11 << 8;
      if ( (a2 & 0x2000000) != 0 )
        v12 |= 2u;
      v13 = RtlWalkFrameChain((PVOID *)&StackLookasideListEntry->Next, v11 + v6, v12);
      if ( v13 > v11 )
        v9 = v13 - v11;
      else
        v9 = 0LL;
    }
    if ( (a2 & 0x1000) != 0 )
    {
      v14 = (PVOID *)(&StackLookasideListEntry->Next + v9);
      if ( KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[9] )
      {
        v10 = PsPicoWalkUserStack(v14, (unsigned int)(v6 - v9));
      }
      else
      {
        v15 = HIWORD(a2) & 0xF;
        v16 = RtlWalkFrameChain(v14, v6 + v15 - v9, (v15 << 8) | 1);
        if ( v16 > v15 )
          v10 = v16 - v15;
        else
          v10 = 0;
      }
    }
    v17 = v10 + v9;
    if ( v10 + (_DWORD)v9 )
    {
      v31 = 0;
      v18 = a2 & 0xFFFFE600 | 2;
      v30 = 16;
      v26 = *(_DWORD *)(v23 + 1584);
      v27 = *(_DWORD *)(v23 + 1592);
      v25 = *v24;
      v29 = &v25;
      if ( (a1 & 0x1000000) == 0 || v17 < 4 )
        goto LABEL_25;
      v19 = 6181;
      if ( !(_DWORD)v9 )
        v19 = 6182;
      if ( !(unsigned __int8)EtwpTraceStackKey(
                               (unsigned __int16)a1,
                               v18,
                               v19,
                               (unsigned int)&v29,
                               (__int64)StackLookasideListEntry,
                               v10 + (unsigned int)v9) )
      {
LABEL_25:
        v34 = 0;
        v33 = 8 * v17;
        v32 = StackLookasideListEntry;
        EtwpLogKernelEvent((__int64)&v29, EtwpHostSiloState, (unsigned __int16)a1, 2u, 0x1820u, v18);
      }
    }
    if ( v6 == 256 )
      RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, StackLookasideListEntry - 1);
  }
}
