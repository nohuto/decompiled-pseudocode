/*
 * XREFs of RawCreate @ 0x14040BCD4
 * Callers:
 *     RawDispatch @ 0x14040B7FC (RawDispatch.c)
 * Callees:
 *     RawInitiateDeleteVolume @ 0x1400067CC (RawInitiateDeleteVolume.c)
 *     IoSetShareAccessEx @ 0x140006BF0 (IoSetShareAccessEx.c)
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     IoCheckShareAccessEx @ 0x14040C150 (IoCheckShareAccessEx.c)
 */

__int64 __fastcall RawCreate(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, __int64 a3, __int64 a4)
{
  _ERESOURCE **p_PagingIoResource; // rdi
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // r15
  struct _FILE_OBJECT *v11; // r8
  int v12; // ecx
  int v13; // eax
  unsigned __int16 v14; // r15
  ACCESS_MASK v15; // r12d
  bool v16; // zf
  void **FileContextSupportPointer; // rax
  int v18; // esi
  unsigned __int8 v19; // bl
  signed __int32 v20; // eax

  p_PagingIoResource = &AdvancedHeader[2].PagingIoResource;
  v8 = KeAbPreAcquire((ULONG_PTR)&AdvancedHeader[2].PagingIoResource, 0LL, 0LL, a4);
  v9 = v8;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)p_PagingIoResource, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)p_PagingIoResource, v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  p_PagingIoResource[1] = (_ERESOURCE *)KeGetCurrentThread();
  *((_DWORD *)p_PagingIoResource + 12) = CurrentIrql;
  v11 = *(struct _FILE_OBJECT **)(a3 + 48);
  if ( v11 && (v11->FileName.Length || v11->RelatedFileObject)
    || (v12 = *(_DWORD *)(a3 + 16), (v12 & 0xFF000000) != 0x1000000)
    || (v12 & 1) != 0 )
  {
    v18 = -1073741811;
    goto LABEL_24;
  }
  v13 = *(_DWORD *)&AdvancedHeader[1].NodeTypeCode;
  if ( (v13 & 1) != 0 )
  {
    v18 = -1073741790;
    goto LABEL_24;
  }
  if ( (v13 & 2) != 0 )
  {
    v18 = -1073741202;
    goto LABEL_24;
  }
  v14 = *(_WORD *)(a3 + 26);
  v15 = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 16LL);
  v16 = *(_DWORD *)&AdvancedHeader[1].Flags == 0;
  if ( *(_DWORD *)&AdvancedHeader[1].Flags )
  {
    v18 = IoCheckShareAccessEx(v15, v14, v11, (PSHARE_ACCESS)((char *)&AdvancedHeader[1].Resource + 4), 1u, 0LL);
    if ( v18 >= 0 )
    {
      v16 = *(_DWORD *)&AdvancedHeader[1].Flags == 0;
      goto LABEL_13;
    }
LABEL_24:
    Irp->IoStatus.Information = 0LL;
    goto LABEL_16;
  }
LABEL_13:
  if ( v16 )
    IoSetShareAccessEx(
      v15,
      v14,
      *(PFILE_OBJECT *)(a3 + 48),
      (PSHARE_ACCESS)((char *)&AdvancedHeader[1].Resource + 4),
      0LL);
  FileContextSupportPointer = AdvancedHeader[1].FileContextSupportPointer;
  ++*(_DWORD *)&AdvancedHeader[1].Flags;
  v18 = 0;
  ++LODWORD(AdvancedHeader[1].Resource);
  *(_QWORD *)(*(_QWORD *)(a3 + 48) + 16LL) = FileContextSupportPointer;
  Irp->IoStatus.Information = 1LL;
  *(_DWORD *)(*(_QWORD *)(a3 + 48) + 80LL) |= 8u;
  *(_QWORD *)(*(_QWORD *)(a3 + 48) + 24LL) = AdvancedHeader;
LABEL_16:
  if ( *(_DWORD *)&AdvancedHeader[1].Flags || !RawInitiateDeleteVolume(AdvancedHeader, 0, 1) )
  {
    v19 = *((_BYTE *)p_PagingIoResource + 48);
    p_PagingIoResource[1] = 0LL;
    v20 = _InterlockedCompareExchange((volatile signed __int32 *)p_PagingIoResource, 1, 0);
    if ( v20 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)p_PagingIoResource, v20);
    __writecr8(v19);
    KeAbPostRelease((ULONG_PTR)p_PagingIoResource);
  }
  Irp->IoStatus.Status = v18;
  IofCompleteRequest(Irp, 1);
  return (unsigned int)v18;
}
