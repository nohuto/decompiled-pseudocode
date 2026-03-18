/*
 * XREFs of IopSymlinkRememberJunction @ 0x14054891C
 * Callers:
 *     IopSymlinkProcessReparse @ 0x140548F44 (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x140548FF4 (IopGraftName.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1400151B4 (RtlAppendUnicodeToString.c)
 *     IopSymlinkGetECP @ 0x140070050 (IopSymlinkGetECP.c)
 *     RtlAppendUnicodeStringToString @ 0x1400D1F10 (RtlAppendUnicodeStringToString.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopSymlinkUpdateECP @ 0x140548AC0 (IopSymlinkUpdateECP.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x140548C04 (IopSymlinkFreeRelatedMountPointChain.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x140548DD8 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkGetRelatedMountPoint @ 0x14054967C (IopSymlinkGetRelatedMountPoint.c)
 *     IopGetRelatedFileName @ 0x140671564 (IopGetRelatedFileName.c)
 */

__int64 __fastcall IopSymlinkRememberJunction(unsigned __int16 a1, __int64 a2, __int64 a3, UNICODE_STRING *a4)
{
  int RelatedFileName; // esi
  unsigned __int16 *RelatedMountPoint; // rax
  __int64 v10; // r9
  unsigned __int16 *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r8
  PVOID PoolWithTag; // rax
  int v16; // [rsp+20h] [rbp-50h]
  __int16 v17; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int16 *v18; // [rsp+58h] [rbp-18h] BYREF
  UNICODE_STRING Destination; // [rsp+60h] [rbp-10h] BYREF

  RelatedFileName = 0;
  RelatedMountPoint = (unsigned __int16 *)IopSymlinkGetRelatedMountPoint(a4, a1);
  v11 = RelatedMountPoint;
  if ( RelatedMountPoint )
  {
    *RelatedMountPoint = a1;
    IopSymlinkFreeRelatedMountPointChain(RelatedMountPoint);
  }
  else
  {
    v12 = *(_QWORD *)(v10 + 8);
    v11 = (unsigned __int16 *)v10;
    while ( v12 )
    {
      v11 = (unsigned __int16 *)v12;
      v12 = *(_QWORD *)(v12 + 8);
    }
    v11[1] |= 1u;
    v18 = v11;
    *v11 = a1;
    if ( (unsigned __int16 *)v10 == v11 )
    {
      if ( *(_QWORD *)(a2 + 64) )
      {
        v13 = (unsigned __int16)(*(_WORD *)(v10 + 16) + 2);
        *(_DWORD *)&Destination.Length = 0;
        Destination.Buffer = 0LL;
        v17 = 0;
        RelatedFileName = IopGetRelatedFileName(a2, &Destination, v13, &v17);
        if ( RelatedFileName >= 0 )
        {
          RtlAppendUnicodeToString(&Destination, L"\\");
          RtlAppendUnicodeStringToString(&Destination, a4 + 1);
          RelatedFileName = IopSymlinkUpdateECP((PIRP)a3, a4, v17, a4->MaximumLength);
          ExFreePoolWithTag(Destination.Buffer, 0);
          if ( RelatedFileName < 0 )
            return (unsigned int)RelatedFileName;
          IopSymlinkGetECP(*(struct _ECP_LIST **)(a3 + 112), (PVOID *)&v18);
          v11 = v18;
        }
      }
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)(a2 + 88) + 32LL, 0x69536F49u);
  *((_QWORD *)v11 + 1) = PoolWithTag;
  if ( PoolWithTag )
  {
    LOWORD(v16) = 0;
    IopSymlinkInitializeSymlinkInfo(
      PoolWithTag,
      (unsigned int)*(unsigned __int16 *)(a2 + 88) + 32,
      *(_QWORD *)(a2 + 96),
      *(unsigned __int16 *)(a2 + 88),
      v16,
      0LL,
      0,
      0,
      0,
      0LL);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)RelatedFileName;
}
