/*
 * XREFs of CmpQuerySecurityDescriptorInfo @ 0x1404049A0
 * Callers:
 *     CmpQueryKeySecurity @ 0x14000B338 (CmpQueryKeySecurity.c)
 * Callees:
 *     SeQuerySecurityDescriptorInfo @ 0x140404A00 (SeQuerySecurityDescriptorInfo.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140440140 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

NTSTATUS __fastcall CmpQuerySecurityDescriptorInfo(
        __int64 a1,
        DWORD *a2,
        void *a3,
        ULONG *a4,
        PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor,
        __int64 a6)
{
  ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)(CmpGetSecurityCacheEntryForKcbStack(a1, a6, 0LL) + 32);
  return SeQuerySecurityDescriptorInfo(a2, a3, a4, &ObjectsSecurityDescriptor);
}
