/*
 * XREFs of ?TelemetrySpatialInteractionDeviceClosed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WPEAX@Z @ 0x18006414C
 * Callers:
 *     ??_GSpatialInteractionDevice@@UEAAPEAXI@Z @ 0x1800642E0 (--_GSpatialInteractionDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180063F5C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::TelemetrySpatialInteractionDeviceClosed_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        const wchar_t *a2,
        void *a3)
{
  const struct _TlgProvider_t *v4; // rcx
  const wchar_t *v5; // rdx
  __int64 v6; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  const wchar_t *v8; // [rsp+50h] [rbp-48h]
  int v9; // [rsp+58h] [rbp-40h]
  int v10; // [rsp+5Ch] [rbp-3Ch]
  void **v11; // [rsp+60h] [rbp-38h]
  __int64 v12; // [rsp+68h] [rbp-30h]
  void *v13; // [rsp+B0h] [rbp+18h] BYREF

  v13 = a3;
  v4 = (const struct _TlgProvider_t *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( *(_DWORD *)v4 > 4u
    && (*((_QWORD *)v4 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v4 + 3) & 0x400000000000LL) == *((_QWORD *)v4 + 3) )
  {
    v5 = (const wchar_t *)&unk_1800AE6CC;
    LODWORD(v6) = 0;
    if ( a2 )
    {
      v5 = a2;
      v6 = -1LL;
      do
        ++v6;
      while ( a2[v6] );
    }
    v8 = v5;
    v9 = 2 * v6 + 2;
    v11 = &v13;
    v10 = 0;
    v12 = 8LL;
    TlgWrite(v4, &unk_1800B9990, 0LL, 0LL, 4u, &pData);
  }
}
