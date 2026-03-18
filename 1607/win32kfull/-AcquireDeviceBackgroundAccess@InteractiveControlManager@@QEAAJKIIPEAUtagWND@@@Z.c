/*
 * XREFs of ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z @ 0x1C0123DF0
 * Callers:
 *     NtUserAcquireInteractiveControlBackgroundAccess @ 0x1C0123C60 (NtUserAcquireInteractiveControlBackgroundAccess.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C021F6CC (_TlgCreateSz.c)
 *     ?SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z @ 0x1C023E1FC (-SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z.c)
 */

__int64 __fastcall InteractiveControlManager::AcquireDeviceBackgroundAccess(
        InteractiveControlManager *this,
        int a2,
        __int64 a3,
        __int64 a4,
        struct tagWND *a5)
{
  unsigned int v5; // r9d
  unsigned int v6; // edi
  unsigned int v9; // r8d
  InteractiveControlDevice **v10; // rsi
  __int64 v11; // r12
  InteractiveControlDevice *v12; // rcx
  int v14; // r10d
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  LPCGUID cData; // r9
  LPCGUID v18; // r8
  int v19; // [rsp+30h] [rbp-71h] BYREF
  int v20; // [rsp+38h] [rbp-69h] BYREF
  unsigned int v21; // [rsp+40h] [rbp-61h] BYREF
  int v22; // [rsp+44h] [rbp-5Dh] BYREF
  struct tagWND *v23; // [rsp+48h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-31h] BYREF
  unsigned int *v26; // [rsp+80h] [rbp-21h]
  int v27; // [rsp+88h] [rbp-19h]
  int v28; // [rsp+8Ch] [rbp-15h]
  int *v29; // [rsp+90h] [rbp-11h]
  int v30; // [rsp+98h] [rbp-9h]
  int v31; // [rsp+9Ch] [rbp-5h]
  int *v32; // [rsp+A0h] [rbp-1h]
  int v33; // [rsp+A8h] [rbp+7h]
  int v34; // [rsp+ACh] [rbp+Bh]
  struct tagWND **v35; // [rsp+B0h] [rbp+Fh]
  int v36; // [rsp+B8h] [rbp+17h]
  int v37; // [rsp+BCh] [rbp+1Bh]

  v21 = 0;
  v5 = 750;
  v6 = 0;
  v19 = 750;
  v20 = 750;
  v9 = 750;
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::AcquireDeviceBackgroundAccess entry");
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v26 = (unsigned int *)&v22;
    v29 = &v20;
    v32 = &v19;
    v35 = &v23;
    v22 = a2;
    v27 = v14;
    v30 = v14;
    v33 = v14;
    v23 = a5;
    v36 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF541, v15, v16, 7u, &pData);
    v5 = v19;
    v9 = v20;
  }
  while ( v9 <= v5 )
    v6 |= 1 << (v9++ + 24);
  v10 = (InteractiveControlDevice **)((char *)this + 40);
  v11 = 5LL;
  do
  {
    v12 = *v10;
    if ( *v10 && (!a2 || a2 == *((_DWORD *)v12 + 2)) )
      InteractiveControlDevice::SetBackgroundAccessor(v12, a5, v6);
    ++v10;
    --v11;
  }
  while ( v11 );
  if ( !a2 )
  {
    if ( a5 == *((struct tagWND **)this + 2) )
    {
      *((_DWORD *)this + 6) |= v6;
    }
    else
    {
      *((_DWORD *)this + 6) = v6;
      HMAssignmentLock((char *)this + 16, a5);
    }
  }
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::AcquireDeviceBackgroundAccess exit");
    v28 = 0;
    v26 = &v21;
    v27 = (int)cData;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF3B0, v18, cData, (UINT32)cData, &pData);
  }
  return v21;
}
