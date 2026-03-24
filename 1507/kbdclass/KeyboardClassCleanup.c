/*
 * XREFs of KeyboardClassCleanup @ 0x1C00027C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005348 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall KeyboardClassCleanup(__int64 a1, IRP *a2)
{
  IRP *v2; // rbx
  __int64 v4; // rsi
  PFILE_OBJECT FileObject; // rdi
  __int64 v6; // rdx
  KIRQL v8; // dl
  __int64 ***v9; // r8
  __int64 *v10; // rdi
  __int64 **v11; // r9
  __int64 ****v12; // rax
  __int64 ***v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // [rsp+30h] [rbp-18h] BYREF
  __int64 **v16; // [rsp+38h] [rbp-10h]

  v2 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 2LL);
  }
  v4 = *(_QWORD *)(a1 + 64);
  FileObject = v2->Tail.Overlay.CurrentStackLocation->FileObject;
  if ( DriverEntry == FileObject->FsContext2 )
  {
    v16 = &v15;
    v15 = (__int64 *)&v15;
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 160));
    v9 = *(__int64 ****)(v4 + 168);
    if ( v9 != (__int64 ***)(v4 + 168) )
    {
      do
      {
        v11 = *v9;
        if ( !FileObject || v9[2][6] == (__int64 *)FileObject )
        {
          v12 = (__int64 ****)v9[1];
          if ( v11[1] != (__int64 *)v9 || *v12 != v9 )
            __fastfail(3u);
          *v12 = (__int64 ***)v11;
          v11[1] = (__int64 *)v12;
          if ( _InterlockedExchange64((volatile __int64 *)v9 - 8, 0LL) )
          {
            *((_DWORD *)v9 - 30) = -1073741536;
            *(v9 - 14) = 0LL;
            v13 = (__int64 ***)v16;
            *v9 = &v15;
            v9[1] = (__int64 **)v13;
            if ( *v13 != &v15 )
              __fastfail(3u);
            *v13 = (__int64 **)v9;
            v16 = (__int64 **)v9;
          }
          else
          {
            v9[1] = (__int64 **)v9;
            *v9 = (__int64 **)v9;
          }
        }
        v9 = (__int64 ***)v11;
      }
      while ( v11 != (__int64 **)(v4 + 168) );
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 160), v8);
    while ( 1 )
    {
      v10 = v15;
      if ( v15 == (__int64 *)&v15 )
        break;
      v14 = (__int64 *)*v15;
      if ( (__int64 **)v15[1] != &v15 || (__int64 *)v14[1] != v15 )
        __fastfail(3u);
      v15 = (__int64 *)*v15;
      v14[1] = (__int64)&v15;
      IofCompleteRequest((PIRP)(v10 - 21), 0);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), v10 - 21, 0x20u);
    }
  }
  v2->IoStatus.Status = 0;
  v2->IoStatus.Information = 0LL;
  IofCompleteRequest(v2, 0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v6, 2LL);
  }
  return 0LL;
}
