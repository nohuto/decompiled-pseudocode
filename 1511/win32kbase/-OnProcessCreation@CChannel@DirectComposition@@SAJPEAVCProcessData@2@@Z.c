/*
 * XREFs of ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C001262C
 * Callers:
 *     ?Initialize@CProcessData@DirectComposition@@AEAAJXZ @ 0x1C0012540 (-Initialize@CProcessData@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0012700 (Win32AllocPoolNonPaged.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001E0D0 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall DirectComposition::CChannel::OnProcessCreation(struct DirectComposition::CProcessData *a1)
{
  struct _ERESOURCE *v2; // rbx
  struct _RTL_GENERIC_TABLE *v3; // rax
  struct _RTL_GENERIC_TABLE *v4; // rsi
  struct _ERESOURCE *v5; // rax
  NTSTATUS v6; // edi
  __int64 result; // rax

  v2 = 0LL;
  v3 = (struct _RTL_GENERIC_TABLE *)Win32AllocPoolWithQuotaZInit(0x48uLL);
  v4 = v3;
  if ( v3 )
    RtlInitializeGenericTable(
      v3,
      DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::CompareTableEntries,
      DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::AllocateTableEntry,
      (PRTL_GENERIC_FREE_ROUTINE)rimUserMemAllocNodeFree,
      0LL);
  else
    v4 = 0LL;
  if ( !v4 )
  {
    v6 = -1073741801;
    goto LABEL_8;
  }
  v5 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 1935885124LL);
  v2 = v5;
  if ( v5 )
    memset(v5, 0, sizeof(struct _ERESOURCE));
  else
    v2 = 0LL;
  if ( v2 )
  {
    v6 = ExInitializeResourceLite(v2);
    if ( v6 >= 0 )
      goto LABEL_8;
  }
  else
  {
    v6 = -1073741801;
  }
  Win32FreePool(v4);
  v4 = 0LL;
  if ( v2 )
  {
    Win32FreePool(v2);
    v2 = 0LL;
  }
LABEL_8:
  *(_QWORD *)a1 = v4;
  result = (unsigned int)v6;
  *((_QWORD *)a1 + 1) = v2;
  return result;
}
