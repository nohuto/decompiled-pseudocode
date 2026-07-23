/*
 * XREFs of CmpQuerySecurityDescriptorInfo @ 0x140403860
 * Callers:
 *     CmpQueryKeySecurity @ 0x14000AEB8 (CmpQueryKeySecurity.c)
 * Callees:
 *     SeQuerySecurityDescriptorInfo @ 0x1404038C0 (SeQuerySecurityDescriptorInfo.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x14043F010 (CmpGetSecurityCacheEntryForKcbStack.c)
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
