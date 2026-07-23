/*
 * XREFs of EtwTraceThread @ 0x1404597E4
 * Callers:
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 *     PspInsertThread @ 0x1404F9B40 (PspInsertThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     PsGetCurrentThreadTeb @ 0x1400A9E54 (PsGetCurrentThreadTeb.c)
 *     PsGetPagePriorityThread @ 0x1400E5CA0 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x1400E5CD0 (PsGetIoPriorityThread.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwpPsProvTraceThread @ 0x14054B710 (EtwpPsProvTraceThread.c)
 */

__int64 __fastcall EtwTraceThread(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r14
  __int64 v6; // r8
  _DWORD *CurrentThreadTeb; // rax
  int v8; // eax
  __int64 v10; // rax
  __int16 v11; // [rsp+30h] [rbp-88h]
  int v12; // [rsp+34h] [rbp-84h]
  _DWORD v13[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v14; // [rsp+48h] [rbp-70h]
  __int64 v15; // [rsp+50h] [rbp-68h]
  __int64 v16; // [rsp+58h] [rbp-60h]
  __int64 v17; // [rsp+60h] [rbp-58h]
  __int64 v18; // [rsp+68h] [rbp-50h]
  __int64 v19; // [rsp+70h] [rbp-48h]
  __int64 v20; // [rsp+78h] [rbp-40h]
  int v21; // [rsp+80h] [rbp-38h]
  char v22; // [rsp+84h] [rbp-34h]
  char PagePriorityThread; // [rsp+85h] [rbp-33h]
  char IoPriorityThread; // [rsp+86h] [rbp-32h]
  char v25; // [rsp+87h] [rbp-31h]
  _DWORD *v26; // [rsp+90h] [rbp-28h] BYREF
  int v27; // [rsp+98h] [rbp-20h]
  int v28; // [rsp+9Ch] [rbp-1Ch]

  v3 = a3;
  v12 = 5249283;
  if ( (dword_1402FD520 & 2) != 0 )
    EtwpPsProvTraceThread(a1, a2, a3);
  v13[0] = *(_DWORD *)(a1 + 1584);
  v13[1] = *(_DWORD *)(a1 + 1592);
  v14 = *(_QWORD *)(a1 + 56);
  v15 = *(_QWORD *)(a1 + 48);
  v18 = *(_QWORD *)(a1 + 576);
  v19 = *(_QWORD *)(a1 + 1672);
  v16 = 0LL;
  v17 = 0LL;
  v20 = *(_QWORD *)(a1 + 240);
  v21 = 0;
  v22 = *(_BYTE *)(a1 + 563);
  PagePriorityThread = PsGetPagePriorityThread(a1);
  IoPriorityThread = PsGetIoPriorityThread(a1);
  v25 = 0;
  if ( v3 )
  {
    v11 = 1281;
    if ( a2 )
    {
      v16 = *(_QWORD *)(a2 + 16);
      v17 = *(_QWORD *)(a2 + 24);
    }
    CurrentThreadTeb = PsGetCurrentThreadTeb();
    if ( CurrentThreadTeb )
    {
      if ( KeGetCurrentThread()->Process[1].ActiveProcessors.Bitmap[7] )
        v8 = CurrentThreadTeb[3032];
      else
        v8 = CurrentThreadTeb[1480];
      v21 = v8;
    }
  }
  else
  {
    v11 = 1282;
    v12 = 72358147;
    if ( v6 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1064LL) )
      {
        v21 = *(_DWORD *)(v6 + 12128);
        v16 = *(unsigned int *)(v6 + 8196);
        v10 = *(unsigned int *)(v6 + 8200);
      }
      else
      {
        v21 = *(_DWORD *)(v6 + 5920);
        v16 = *(_QWORD *)(v6 + 8);
        v10 = *(_QWORD *)(v6 + 16);
      }
      v17 = v10;
    }
  }
  v26 = v13;
  v27 = 72;
  v28 = 0;
  return EtwTraceKernelEvent((int)&v26, 1, 2u, v11, v12);
}
