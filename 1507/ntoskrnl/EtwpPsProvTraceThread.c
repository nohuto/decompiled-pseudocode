/*
 * XREFs of EtwpPsProvTraceThread @ 0x1406E4CDC
 * Callers:
 *     EtwTraceThread @ 0x14053C038 (EtwTraceThread.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     EtwProviderEnabled @ 0x1400DCD78 (EtwProviderEnabled.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     PsGetCurrentThreadTeb @ 0x140120674 (PsGetCurrentThreadTeb.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PsGetProcessServerSilo @ 0x14050C11C (PsGetProcessServerSilo.c)
 */

_QWORD *__fastcall EtwpPsProvTraceThread(__int64 a1, __int64 a2, char a3)
{
  _DWORD *CurrentThreadTeb; // rax
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  ULONG v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *result; // rax
  __int64 v16; // r9
  void *v17; // rsi
  __int64 v18; // rdi
  REGHANDLE v19; // r14
  signed __int32 v20[8]; // [rsp+0h] [rbp-168h] BYREF
  int v21; // [rsp+30h] [rbp-138h] BYREF
  __int64 v22; // [rsp+38h] [rbp-130h] BYREF
  __int64 v23; // [rsp+40h] [rbp-128h] BYREF
  PCEVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-120h]
  __int64 v25; // [rsp+50h] [rbp-118h]
  int v26; // [rsp+58h] [rbp-110h] BYREF
  int v27; // [rsp+5Ch] [rbp-10Ch] BYREF
  __int64 v28; // [rsp+60h] [rbp-108h] BYREF
  int v29; // [rsp+68h] [rbp-100h]
  __int64 v30; // [rsp+70h] [rbp-F8h] BYREF
  int v31; // [rsp+78h] [rbp-F0h]
  __int64 v32; // [rsp+80h] [rbp-E8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-E0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-D8h] BYREF
  int *v35; // [rsp+A0h] [rbp-C8h]
  int v36; // [rsp+A8h] [rbp-C0h]
  int v37; // [rsp+ACh] [rbp-BCh]
  __int64 v38; // [rsp+B0h] [rbp-B8h]
  int v39; // [rsp+B8h] [rbp-B0h]
  int v40; // [rsp+BCh] [rbp-ACh]
  __int64 v41; // [rsp+C0h] [rbp-A8h]
  int v42; // [rsp+C8h] [rbp-A0h]
  int v43; // [rsp+CCh] [rbp-9Ch]
  __int64 *v44; // [rsp+D0h] [rbp-98h]
  int v45; // [rsp+D8h] [rbp-90h]
  int v46; // [rsp+DCh] [rbp-8Ch]
  __int64 *v47; // [rsp+E0h] [rbp-88h]
  int v48; // [rsp+E8h] [rbp-80h]
  int v49; // [rsp+ECh] [rbp-7Ch]
  __int64 *v50; // [rsp+F0h] [rbp-78h]
  int v51; // [rsp+F8h] [rbp-70h]
  int v52; // [rsp+FCh] [rbp-6Ch]
  __int64 *v53; // [rsp+100h] [rbp-68h]
  int v54; // [rsp+108h] [rbp-60h]
  int v55; // [rsp+10Ch] [rbp-5Ch]
  __int64 v56; // [rsp+110h] [rbp-58h]
  int v57; // [rsp+118h] [rbp-50h]
  int v58; // [rsp+11Ch] [rbp-4Ch]
  int *v59; // [rsp+120h] [rbp-48h]
  int v60; // [rsp+128h] [rbp-40h]
  int v61; // [rsp+12Ch] [rbp-3Ch]
  __int64 *v62; // [rsp+130h] [rbp-38h]
  int v63; // [rsp+138h] [rbp-30h]
  int v64; // [rsp+13Ch] [rbp-2Ch]

  v25 = a1;
  v22 = 0LL;
  v23 = 0LL;
  v21 = 0;
  if ( a3 )
  {
    EventDescriptor = &ThreadStart;
    CurrentThreadTeb = PsGetCurrentThreadTeb();
    if ( CurrentThreadTeb )
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread->Process[1].ActiveProcessors.Bitmap[7] )
      {
        v7 = CurrentThreadTeb[3032];
      }
      else
      {
        v7 = CurrentThreadTeb[1480];
        v29 = v7;
      }
      v21 = v7;
    }
  }
  else
  {
    EventDescriptor = (PCEVENT_DESCRIPTOR)&ThreadStop;
    v8 = *(_QWORD *)(a1 + 240);
    if ( v8 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1064LL) )
      {
        v9 = *(_DWORD *)(v8 + 12128);
      }
      else
      {
        v9 = *(_DWORD *)(v8 + 5920);
        v31 = v9;
      }
      v21 = v9;
    }
  }
  v26 = *(_DWORD *)(a1 + 1576);
  UserData.Ptr = (ULONGLONG)&v26;
  UserData.Size = 4;
  UserData.Reserved = 0;
  v27 = *(_DWORD *)(a1 + 1584);
  v35 = &v27;
  v36 = 4;
  v37 = 0;
  v38 = a1 + 56;
  v39 = 8;
  v40 = 0;
  v41 = a1 + 48;
  v42 = 8;
  v43 = 0;
  if ( a3 )
  {
    if ( a2 )
    {
      v22 = *(_QWORD *)(a2 + 16);
      v23 = *(_QWORD *)(a2 + 24);
    }
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 240);
    if ( v10 )
    {
      v22 = *(_QWORD *)(v10 + 8);
      v23 = *(_QWORD *)(v10 + 16);
    }
  }
  v44 = &v22;
  v45 = 8;
  v46 = 0;
  v47 = &v23;
  v48 = 8;
  v49 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x400) == 0 && (*(_BYTE *)(a1 + 1732) & 8) == 0 )
    _InterlockedOr(v20, 0);
  v50 = &v28;
  v51 = 8;
  v52 = 0;
  v28 = *(_QWORD *)(a1 + 1664);
  v53 = &v28;
  v54 = 8;
  v55 = 0;
  v56 = a1 + 240;
  v57 = 8;
  v58 = 0;
  v59 = &v21;
  v60 = 4;
  v61 = 0;
  v11 = 10;
  if ( !a3 )
  {
    v32 = *(_QWORD *)(a1 + 72);
    v62 = &v32;
    v63 = 8;
    v64 = 0;
    v11 = 11;
  }
  EtwWrite(EtwpPsProvRegHandle, EventDescriptor, 0LL, v11, &UserData);
  result = PsGetProcessServerSilo(*(_QWORD *)(a1 + 544), v12, v13, v14);
  v17 = result;
  if ( result )
  {
    PsGetMonitorContextServerSilo(EtwSiloMonitor, result, &v30, v16);
    v18 = v30;
    if ( v30 )
    {
      v19 = *(_QWORD *)(v30 + 400);
      if ( EtwProviderEnabled(v19, 0, 0x20uLL) )
        EtwWrite(v19, EventDescriptor, 0LL, v11, &UserData);
      PsDereferenceMonitorContextServerSilo(v18);
    }
    return (_QWORD *)PspDereferenceSiloObject(v17);
  }
  return result;
}
