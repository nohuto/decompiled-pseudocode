/*
 * XREFs of ?ndisNsiProviderAttachNsiClient@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@0PEBXPEAPEAXPEAPEBX@Z @ 0x1C00ACE20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 */

__int64 __fastcall ndisNsiProviderAttachNsiClient(
        void *a1,
        void *a2,
        const struct _NPI_REGISTRATION_INSTANCE *a3,
        void *a4,
        const void *a5,
        void **a6,
        const void **a7)
{
  char v9; // cl

  v9 = byte_1C008371D;
  if ( (unsigned __int8)byte_1C008371D >= 4u )
  {
    WPP_SF_qq(0x42u, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a2);
    v9 = byte_1C008371D;
  }
  ndisNsiSavedClientNpi = a4;
  *a6 = 0LL;
  *a7 = &unk_1C0070A98;
  qword_1C0083058 = (__int64)a5;
  if ( (unsigned __int8)v9 >= 4u )
    WPP_SF_qq(0x43u, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a2, a4);
  return 0LL;
}
