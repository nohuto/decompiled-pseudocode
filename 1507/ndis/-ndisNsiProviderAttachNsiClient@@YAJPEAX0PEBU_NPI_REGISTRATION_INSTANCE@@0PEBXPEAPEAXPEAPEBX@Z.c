/*
 * XREFs of ?ndisNsiProviderAttachNsiClient@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@0PEBXPEAPEAXPEAPEBX@Z @ 0x1C00B2150
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
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

  v9 = byte_1C008531D;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
  {
    WPP_SF_qq(0x42u, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a2);
    v9 = byte_1C008531D;
  }
  ndisNsiSavedClientNpi = a4;
  *a6 = 0LL;
  *a7 = &unk_1C00718B8;
  qword_1C00850B8 = (__int64)a5;
  if ( (unsigned __int8)v9 >= 4u )
    WPP_SF_qq(0x43u, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a2, a4);
  return 0LL;
}
