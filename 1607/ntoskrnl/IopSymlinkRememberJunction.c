/*
 * XREFs of IopSymlinkRememberJunction @ 0x140540AD0
 * Callers:
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     IopGraftName @ 0x140541028 (IopGraftName.c)
 * Callees:
 *     IopSymlinkGetECP @ 0x140079FA0 (IopSymlinkGetECP.c)
 *     RtlAppendUnicodeStringToString @ 0x140087614 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1400C3920 (RtlAppendUnicodeToString.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x14012ED68 (IopSymlinkGetMostRecentlyUsedName.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopSymlinkUpdateECP @ 0x140540BD0 (IopSymlinkUpdateECP.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x140540D0C (IopSymlinkFreeRelatedMountPointChain.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x140540EE0 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkGetRelatedMountPoint @ 0x14054168C (IopSymlinkGetRelatedMountPoint.c)
 *     IopGetRelatedFileName @ 0x14062149C (IopGetRelatedFileName.c)
 */

__int64 __fastcall IopSymlinkRememberJunction(unsigned __int16 a1, __int64 a2, __int64 a3, UNICODE_STRING *a4)
{
  int RelatedFileName; // edi
  unsigned __int16 *RelatedMountPoint; // rax
  __int64 v10; // r9
  _WORD *MostRecentlyUsedName; // rbx
  _WORD *v12; // r9
  __int16 v13; // dx
  PVOID PoolWithTag; // rax
  __int64 v16; // r8
  int v17; // [rsp+20h] [rbp-50h]
  __int16 v18; // [rsp+50h] [rbp-20h] BYREF
  _WORD *v19; // [rsp+58h] [rbp-18h] BYREF
  UNICODE_STRING Destination; // [rsp+60h] [rbp-10h] BYREF

  RelatedFileName = 0;
  RelatedMountPoint = (unsigned __int16 *)IopSymlinkGetRelatedMountPoint(a4, a1);
  MostRecentlyUsedName = RelatedMountPoint;
  if ( RelatedMountPoint )
  {
    *RelatedMountPoint = a1;
    IopSymlinkFreeRelatedMountPointChain(RelatedMountPoint);
  }
  else
  {
    MostRecentlyUsedName = (_WORD *)IopSymlinkGetMostRecentlyUsedName(v10);
    v19 = MostRecentlyUsedName;
    MostRecentlyUsedName[1] |= v13;
    *MostRecentlyUsedName = a1;
    if ( v12 == MostRecentlyUsedName )
    {
      if ( *(_QWORD *)(a2 + 64) )
      {
        v16 = (unsigned __int16)(v12[8] + 2);
        *(_DWORD *)&Destination.Length = 0;
        Destination.Buffer = 0LL;
        v18 = 0;
        RelatedFileName = IopGetRelatedFileName(a2, &Destination, v16, &v18);
        if ( RelatedFileName >= 0 )
        {
          RtlAppendUnicodeToString(&Destination, L"\\");
          RtlAppendUnicodeStringToString(&Destination, a4 + 1);
          RelatedFileName = IopSymlinkUpdateECP((PIRP)a3, a4, v18, a4->MaximumLength);
          ExFreePoolWithTag(Destination.Buffer, 0);
          if ( RelatedFileName < 0 )
            return (unsigned int)RelatedFileName;
          IopSymlinkGetECP(*(struct _ECP_LIST **)(a3 + 112), (PVOID *)&v19);
          MostRecentlyUsedName = v19;
        }
      }
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)(a2 + 88) + 32LL, 0x69536F49u);
  *((_QWORD *)MostRecentlyUsedName + 1) = PoolWithTag;
  if ( PoolWithTag )
  {
    LOWORD(v17) = 0;
    IopSymlinkInitializeSymlinkInfo(
      PoolWithTag,
      (unsigned int)*(unsigned __int16 *)(a2 + 88) + 32,
      *(_QWORD *)(a2 + 96),
      *(unsigned __int16 *)(a2 + 88),
      v17,
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
