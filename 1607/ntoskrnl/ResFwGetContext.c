/*
 * XREFs of ResFwGetContext @ 0x140725238
 * Callers:
 *     BgGetContext @ 0x1407251F0 (BgGetContext.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x1400A8990 (MmAllocatePagesForMdlEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 */

__int64 __fastcall ResFwGetContext(__int64 *a1)
{
  int v2; // ecx
  unsigned int v3; // ebp
  unsigned int v4; // r14d
  PMDL PagesForMdl; // rax
  PMDL v6; // rsi
  char *MappedSystemVa; // rdx
  __int64 v8; // rcx
  __int64 result; // rax

  if ( !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  if ( (dword_1402F9F90 & 1) == 0 )
    return 3221225473LL;
  v2 = dword_1402F9FAC;
  if ( dword_1402F9FB0 >= (unsigned int)dword_1402F9FAC )
    v2 = dword_1402F9FB0;
  v3 = (dword_1402F9FBC + v2 + dword_1402F9FB8 + 20479) & 0xFFFFF000;
  v4 = ((v3 >> 3) + 4095) & 0xFFFFF000;
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v4 + v3, MmCached, 5u);
  v6 = PagesForMdl;
  if ( PagesForMdl )
  {
    if ( (PagesForMdl->MdlFlags & 5) != 0 )
      MappedSystemVa = (char *)PagesForMdl->MappedSystemVa;
    else
      MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
  }
  else
  {
    MappedSystemVa = 0LL;
  }
  v8 = qword_1402F9FC0;
  *(_QWORD *)(qword_1402F9FC0 + 8) = v6;
  *(_QWORD *)(v8 + 16) = MappedSystemVa;
  if ( MappedSystemVa )
  {
    *(_DWORD *)(v8 + 24) = v4 + v3;
    *(_DWORD *)(v8 + 232) = v3;
    *(_QWORD *)(v8 + 224) = &MappedSystemVa[v4];
  }
  else
  {
    *(_DWORD *)(v8 + 24) = 0;
    *(_DWORD *)(v8 + 232) = 0;
    *(_QWORD *)(v8 + 224) = 0LL;
  }
  BgpAnimationRegionSave = qword_1402FA040;
  BgpTextRegionSave = qword_1402FA048;
  result = 0LL;
  *a1 = v8;
  return result;
}
