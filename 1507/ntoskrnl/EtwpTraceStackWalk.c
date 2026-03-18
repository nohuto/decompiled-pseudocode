/*
 * XREFs of EtwpTraceStackWalk @ 0x1402603FC
 * Callers:
 *     MiDeleteValidSystemPte @ 0x140038C20 (MiDeleteValidSystemPte.c)
 *     EtwpStackTraceDispatcher @ 0x1402601B0 (EtwpStackTraceDispatcher.c)
 *     EtwpStackWalkApc @ 0x1402602F4 (EtwpStackWalkApc.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x14001D4B0 (RtlWalkFrameChain.c)
 *     KeQueryCurrentStackInformation @ 0x14001D5D0 (KeQueryCurrentStackInformation.c)
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeGetCurrentStackPointer @ 0x140182D80 (KeGetCurrentStackPointer.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     EtwpTraceStackKey @ 0x140260B00 (EtwpTraceStackKey.c)
 *     PsPicoWalkUserStack @ 0x1406C56E8 (PsPicoWalkUserStack.c)
 */

char __fastcall EtwpTraceStackWalk(int a1, unsigned int a2, __int64 a3, __int64 *a4)
{
  PSLIST_ENTRY v6; // rax
  int v7; // r12d
  PVOID *p_Next; // rdi
  void *v9; // rsp
  __int64 v10; // rbx
  unsigned int v11; // r15d
  unsigned int v12; // r14d
  ULONG v13; // r8d
  PVOID *v14; // rcx
  unsigned int v15; // r14d
  unsigned int v16; // r14d
  unsigned int v17; // esi
  unsigned __int16 v18; // ax
  char v20; // [rsp+10h] [rbp-600h] BYREF
  int v21; // [rsp+610h] [rbp+0h] BYREF
  __int64 *v22; // [rsp+618h] [rbp+8h]
  unsigned __int64 v23; // [rsp+620h] [rbp+10h] BYREF
  __int64 v24; // [rsp+628h] [rbp+18h]
  __int64 v25; // [rsp+630h] [rbp+20h] BYREF
  int v26; // [rsp+638h] [rbp+28h]
  int v27; // [rsp+63Ch] [rbp+2Ch]
  unsigned __int64 v28; // [rsp+648h] [rbp+38h] BYREF
  __int64 *v29; // [rsp+650h] [rbp+40h] BYREF
  int v30; // [rsp+658h] [rbp+48h]
  int v31; // [rsp+65Ch] [rbp+4Ch]
  PVOID *v32; // [rsp+660h] [rbp+50h]
  int v33; // [rsp+668h] [rbp+58h]
  int v34; // [rsp+66Ch] [rbp+5Ch]

  v24 = a3;
  v22 = a4;
  LOBYTE(v6) = KeQueryCurrentStackInformation(&v21, &v23, &v28);
  if ( (_BYTE)v6 )
  {
    LOBYTE(v6) = v21;
    if ( v21 )
    {
      if ( v21 != 5 )
      {
        v7 = 256;
        v6 = RtlpInterlockedPopEntrySList(&EtwpStackLookAsideList);
        if ( !v6 || (p_Next = (PVOID *)&v6[1].Next, v6 == (PSLIST_ENTRY)-16LL) )
        {
          v6 = (PSLIST_ENTRY)&KeGetCurrentStackPointer()[-v23];
          if ( (unsigned __int64)v6 <= 0x1438 )
            return (char)v6;
          v9 = alloca(1536LL);
          p_Next = (PVOID *)&v20;
          LOBYTE(v6) = v20;
          v7 = 192;
        }
        v10 = 0LL;
        v11 = 0;
        if ( (a2 & 0x800) != 0 )
        {
          v12 = (a2 >> 20) & 0xF;
          v13 = v12 << 8;
          if ( (a2 & 0x2000000) != 0 )
            v13 |= 2u;
          LODWORD(v6) = RtlWalkFrameChain(p_Next, v12 + v7, v13);
          if ( (unsigned int)v6 > v12 )
            v10 = (unsigned int)v6 - v12;
          else
            v10 = 0LL;
        }
        if ( (a2 & 0x1000) != 0 )
        {
          v14 = &p_Next[v10];
          if ( KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[6] )
          {
            LODWORD(v6) = PsPicoWalkUserStack(v14, (unsigned int)(v7 - v10));
            v11 = (unsigned int)v6;
          }
          else
          {
            v15 = HIWORD(a2) & 0xF;
            LODWORD(v6) = RtlWalkFrameChain(v14, v7 + v15 - v10, (v15 << 8) | 1);
            if ( (unsigned int)v6 > v15 )
              v11 = (_DWORD)v6 - v15;
            else
              v11 = 0;
          }
        }
        v16 = v11 + v10;
        if ( v11 + (_DWORD)v10 )
        {
          v31 = 0;
          v17 = a2 & 0xFFFFE600 | 2;
          v30 = 16;
          v26 = *(_DWORD *)(v24 + 1576);
          v27 = *(_DWORD *)(v24 + 1584);
          v25 = *v22;
          v29 = &v25;
          if ( (a1 & 0x1000000) == 0 || v16 < 4 )
            goto LABEL_26;
          v18 = 6181;
          if ( !(_DWORD)v10 )
            v18 = 6182;
          LOBYTE(v6) = EtwpTraceStackKey(
                         (unsigned __int16)a1,
                         v17,
                         v18,
                         (unsigned int)&v29,
                         (__int64)p_Next,
                         v11 + (unsigned int)v10);
          if ( !(_BYTE)v6 )
          {
LABEL_26:
            v34 = 0;
            v33 = 8 * v16;
            v32 = p_Next;
            LOBYTE(v6) = EtwpLogKernelEvent((__int64)&v29, (unsigned __int16)a1, 2u, 0x1820u, v17);
          }
        }
        if ( v7 == 256 )
          LOBYTE(v6) = (unsigned __int8)RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)p_Next - 1);
      }
    }
  }
  return (char)v6;
}
