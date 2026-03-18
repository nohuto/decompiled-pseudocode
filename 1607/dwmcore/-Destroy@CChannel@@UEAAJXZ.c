/*
 * XREFs of ?Destroy@CChannel@@UEAAJXZ @ 0x180114B50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CChannel@@UEAAKXZ @ 0x18004AC00 (-Release@CChannel@@UEAAKXZ.c)
 *     ?DestroyChannel@CConnection@@QEAAJI@Z @ 0x180113894 (-DestroyChannel@CConnection@@QEAAJI@Z.c)
 */

__int64 __fastcall CChannel::Destroy(CChannel *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CConnection::DestroyChannel(*((struct _RTL_CRITICAL_SECTION **)this + 6), *((_DWORD *)this + 14));
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x208u);
  CChannel::Release(this);
  return v3;
}
