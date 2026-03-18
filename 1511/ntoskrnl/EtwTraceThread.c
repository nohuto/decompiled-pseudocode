/*
 * XREFs of EtwTraceThread @ 0x140502700
 * Callers:
 *     PspInsertThread @ 0x1403EF330 (PspInsertThread.c)
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     PsGetPagePriorityThread @ 0x140070140 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x140070170 (PsGetIoPriorityThread.c)
 *     PsGetCurrentThreadTeb @ 0x1400EB578 (PsGetCurrentThreadTeb.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     EtwpPsProvTraceThread @ 0x140661CA4 (EtwpPsProvTraceThread.c)
 */

__int64 __fastcall EtwTraceThread(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r14
  __int64 v6; // r8
  _DWORD *CurrentThreadTeb; // rax
  int v8; // eax
  __int64 v10; // rax
  unsigned __int16 v11; // [rsp+30h] [rbp-88h]
  _DWORD v12[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v13; // [rsp+48h] [rbp-70h]
  __int64 v14; // [rsp+50h] [rbp-68h]
  __int64 v15; // [rsp+58h] [rbp-60h]
  __int64 v16; // [rsp+60h] [rbp-58h]
  __int64 v17; // [rsp+68h] [rbp-50h]
  __int64 v18; // [rsp+70h] [rbp-48h]
  __int64 v19; // [rsp+78h] [rbp-40h]
  int v20; // [rsp+80h] [rbp-38h]
  char v21; // [rsp+84h] [rbp-34h]
  char PagePriorityThread; // [rsp+85h] [rbp-33h]
  char IoPriorityThread; // [rsp+86h] [rbp-32h]
  char v24; // [rsp+87h] [rbp-31h]
  _DWORD *v25; // [rsp+90h] [rbp-28h] BYREF
  int v26; // [rsp+98h] [rbp-20h]
  int v27; // [rsp+9Ch] [rbp-1Ch]

  v3 = a3;
  if ( (dword_1402D84A0 & 2) != 0 )
    EtwpPsProvTraceThread(a1, a2, a3);
  v12[0] = *(_DWORD *)(a1 + 1576);
  v12[1] = *(_DWORD *)(a1 + 1584);
  v13 = *(_QWORD *)(a1 + 56);
  v14 = *(_QWORD *)(a1 + 48);
  v17 = *(_QWORD *)(a1 + 576);
  v18 = *(_QWORD *)(a1 + 1664);
  v15 = 0LL;
  v16 = 0LL;
  v19 = *(_QWORD *)(a1 + 240);
  v20 = 0;
  v21 = *(_BYTE *)(a1 + 563);
  PagePriorityThread = PsGetPagePriorityThread(a1);
  IoPriorityThread = PsGetIoPriorityThread(a1);
  v24 = 0;
  if ( v3 )
  {
    v11 = 1281;
    if ( a2 )
    {
      v15 = *(_QWORD *)(a2 + 16);
      v16 = *(_QWORD *)(a2 + 24);
    }
    CurrentThreadTeb = PsGetCurrentThreadTeb();
    if ( CurrentThreadTeb )
    {
      if ( KeGetCurrentThread()->Process[1].ActiveProcessors.Bitmap[7] )
        v8 = CurrentThreadTeb[3032];
      else
        v8 = CurrentThreadTeb[1480];
      v20 = v8;
    }
  }
  else
  {
    v11 = 1282;
    if ( v6 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1064LL) )
      {
        v20 = *(_DWORD *)(v6 + 12128);
        v15 = *(unsigned int *)(v6 + 8196);
        v10 = *(unsigned int *)(v6 + 8200);
      }
      else
      {
        v20 = *(_DWORD *)(v6 + 5920);
        v15 = *(_QWORD *)(v6 + 8);
        v10 = *(_QWORD *)(v6 + 16);
      }
      v16 = v10;
    }
  }
  v25 = v12;
  v26 = 72;
  v27 = 0;
  return EtwTraceKernelEvent((int)&v25, 1, 2u, v11, 5249283);
}
