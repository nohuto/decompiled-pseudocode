/*
 * XREFs of EtwTraceThread @ 0x14053C038
 * Callers:
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     MmGetMinWsPagePriority @ 0x140043E34 (MmGetMinWsPagePriority.c)
 *     PsGetCurrentThreadTeb @ 0x140120674 (PsGetCurrentThreadTeb.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     EtwpPsProvTraceThread @ 0x1406E4CDC (EtwpPsProvTraceThread.c)
 */

void *__fastcall EtwTraceThread(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r15
  __int64 v6; // rdx
  unsigned int v7; // ecx
  int v8; // r8d
  __int64 v9; // r9
  int v10; // r10d
  int v11; // ecx
  _DWORD *CurrentThreadTeb; // rax
  int v13; // eax
  __int64 v15; // rax
  unsigned int v16; // eax
  unsigned int v17; // r8d
  unsigned __int16 v18; // [rsp+30h] [rbp-98h]
  _DWORD v19[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v20; // [rsp+48h] [rbp-80h]
  __int64 v21; // [rsp+50h] [rbp-78h]
  __int64 v22; // [rsp+58h] [rbp-70h]
  __int64 v23; // [rsp+60h] [rbp-68h]
  __int64 v24; // [rsp+68h] [rbp-60h]
  __int64 v25; // [rsp+70h] [rbp-58h]
  __int64 v26; // [rsp+78h] [rbp-50h]
  int v27; // [rsp+80h] [rbp-48h]
  char v28; // [rsp+84h] [rbp-44h]
  char v29; // [rsp+85h] [rbp-43h]
  char v30; // [rsp+86h] [rbp-42h]
  char v31; // [rsp+87h] [rbp-41h]
  _QWORD v32[2]; // [rsp+90h] [rbp-38h] BYREF

  v3 = a3;
  if ( (dword_1403277E0 & 2) != 0 )
    EtwpPsProvTraceThread(a1, a2, a3);
  v19[0] = *(_DWORD *)(a1 + 1576);
  v19[1] = *(_DWORD *)(a1 + 1584);
  v20 = *(_QWORD *)(a1 + 56);
  v21 = *(_QWORD *)(a1 + 48);
  v24 = *(_QWORD *)(a1 + 576);
  v25 = *(_QWORD *)(a1 + 1664);
  v22 = 0LL;
  v23 = 0LL;
  v6 = *(_QWORD *)(a1 + 240);
  v26 = v6;
  v27 = 0;
  v28 = *(_BYTE *)(a1 + 563);
  v7 = *(_DWORD *)(a1 + 1724);
  v8 = (v7 >> 12) & 7;
  v9 = *(_QWORD *)(a1 + 544);
  v10 = 0x100000;
  if ( (*(_DWORD *)(v9 + 772) & 0x100000) != 0 )
  {
    v16 = MmGetMinWsPagePriority() + 1;
    if ( v17 < v16 )
      LOBYTE(v16) = v17;
    LOBYTE(v8) = v16;
  }
  v29 = v8;
  v11 = (v7 >> 9) & 7;
  if ( (v10 & *(_DWORD *)(v9 + 772)) != 0 )
    v11 = 0;
  if ( v11 < 2 && (struct _KTHREAD *)a1 == KeGetCurrentThread() && *(_DWORD *)(a1 + 1788) )
    LOBYTE(v11) = 2;
  v30 = v11;
  v31 = 0;
  if ( v3 )
  {
    v18 = 1281;
    if ( a2 )
    {
      v22 = *(_QWORD *)(a2 + 16);
      v23 = *(_QWORD *)(a2 + 24);
    }
    CurrentThreadTeb = PsGetCurrentThreadTeb();
    if ( CurrentThreadTeb )
    {
      if ( KeGetCurrentThread()->Process[1].ActiveProcessors.Bitmap[7] )
        v13 = CurrentThreadTeb[3032];
      else
        v13 = CurrentThreadTeb[1480];
      v27 = v13;
    }
  }
  else
  {
    v18 = 1282;
    if ( v6 )
    {
      if ( *(_QWORD *)(v9 + 1064) )
      {
        v27 = *(_DWORD *)(v6 + 12128);
        v22 = *(unsigned int *)(v6 + 8196);
        v15 = *(unsigned int *)(v6 + 8200);
      }
      else
      {
        v27 = *(_DWORD *)(v6 + 5920);
        v22 = *(_QWORD *)(v6 + 8);
        v15 = *(_QWORD *)(v6 + 16);
      }
      v23 = v15;
    }
  }
  v32[0] = v19;
  v32[1] = 72LL;
  return EtwTraceKernelEvent((int)v32, 1, 2u, v18, 5249283);
}
