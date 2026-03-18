/*
 * XREFs of ?MilConnection_DestroyChannel@@YAJPEAUMIL_CHANNEL__@@@Z @ 0x1800FF440
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DestroyChannel@CConnection@@QEAAJI@Z @ 0x1800FF6C8 (-DestroyChannel@CConnection@@QEAAJI@Z.c)
 */

__int64 __fastcall MilConnection_DestroyChannel(struct MIL_CHANNEL__ *this)
{
  int v2; // ebx
  int v3; // eax

  if ( this )
  {
    v3 = CConnection::DestroyChannel(*((CConnection **)this + 7), *((_DWORD *)this + 16));
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x33Fu);
    CMILRefCountBase::Release(this);
    if ( v2 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0xA5u);
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xA3u);
  }
  return (unsigned int)v2;
}
