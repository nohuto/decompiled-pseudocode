/*
 * XREFs of ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1C000D3A8
 * Callers:
 *     NtDCompositionDestroyChannel @ 0x1C000D3A0 (NtDCompositionDestroyChannel.c)
 *     NtDCompositionCreateChannel @ 0x1C000D4A0 (NtDCompositionCreateChannel.c)
 *     NtDCompositionCreateDwmChannel @ 0x1C0080350 (NtDCompositionCreateDwmChannel.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C000E1A0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C000E298 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1C00425A4 (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CChannel::DestroyHandle(int a1)
{
  DirectComposition::CChannel *v2; // rbx
  struct DirectComposition::CProcessData *v3; // rax
  struct DirectComposition::CProcessData *v4; // rsi
  struct _RTL_GENERIC_TABLE *v5; // rdi
  _QWORD *v6; // rax
  unsigned int v7; // edi
  int Buffer; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  v2 = 0LL;
  v3 = DirectComposition::CProcessData::Current();
  v4 = v3;
  if ( v3 )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(*((DirectComposition::CCriticalSection **)v3 + 1));
    v5 = *(struct _RTL_GENERIC_TABLE **)v4;
    Buffer = a1;
    v10 = 0LL;
    v6 = RtlLookupElementGenericTable(v5, &Buffer);
    if ( v6 )
    {
      v2 = (DirectComposition::CChannel *)v6[1];
      RtlDeleteElementGenericTable(v5, v6);
    }
    v7 = 0;
    if ( !v2 )
      v7 = -1073741790;
    ExReleaseResourceLite(*((PERESOURCE *)v4 + 1));
    KeLeaveCriticalRegion();
  }
  else
  {
    v7 = -1073741823;
  }
  if ( v2 )
    DirectComposition::CChannel::Release(v2);
  return v7;
}
