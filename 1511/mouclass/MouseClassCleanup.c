/*
 * XREFs of MouseClassCleanup @ 0x1C00012B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004F28 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall MouseClassCleanup(__int64 a1, IRP *a2)
{
  IRP *v2; // rbx
  __int64 v4; // rbp
  PFILE_OBJECT FileObject; // rdi
  KIRQL v6; // r9
  __int64 ***v7; // rcx
  __int64 **v8; // rdx
  __int64 *v9; // rdi
  __int64 v10; // rdx
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
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 144));
    v7 = *(__int64 ****)(v4 + 152);
    if ( v7 != (__int64 ***)(v4 + 152) )
    {
      do
      {
        v8 = *v7;
        if ( !FileObject || v7[2][6] == (__int64 *)FileObject )
        {
          v12 = (__int64 ****)v7[1];
          if ( v8[1] != (__int64 *)v7 || *v12 != v7 )
            __fastfail(3u);
          *v12 = (__int64 ***)v8;
          v8[1] = (__int64 *)v12;
          if ( _InterlockedExchange64((volatile __int64 *)v7 - 8, 0LL) )
          {
            *((_DWORD *)v7 - 30) = -1073741536;
            *(v7 - 14) = 0LL;
            v13 = (__int64 ***)v16;
            *v7 = &v15;
            v7[1] = (__int64 **)v13;
            if ( *v13 != &v15 )
              __fastfail(3u);
            *v13 = (__int64 **)v7;
            v16 = (__int64 **)v7;
          }
          else
          {
            v7[1] = (__int64 **)v7;
            *v7 = (__int64 **)v7;
          }
        }
        v7 = (__int64 ***)v8;
      }
      while ( v8 != (__int64 **)(v4 + 152) );
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 144), v6);
    while ( 1 )
    {
      v9 = v15;
      if ( v15 == (__int64 *)&v15 )
        break;
      v14 = (__int64 *)*v15;
      if ( (__int64 **)v15[1] != &v15 || (__int64 *)v14[1] != v15 )
        __fastfail(3u);
      v15 = (__int64 *)*v15;
      v14[1] = (__int64)&v15;
      IofCompleteRequest((PIRP)(v9 - 21), 0);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), v9 - 21, 0x20u);
    }
  }
  v2->IoStatus.Status = 0;
  v2->IoStatus.Information = 0LL;
  IofCompleteRequest(v2, 0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v10, 2LL);
  }
  return 0LL;
}
