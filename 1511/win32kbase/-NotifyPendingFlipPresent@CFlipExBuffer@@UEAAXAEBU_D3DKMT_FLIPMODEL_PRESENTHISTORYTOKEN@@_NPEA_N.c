/*
 * XREFs of ?NotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEA_N2@Z @ 0x1C003E080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CFlipExBuffer::NotifyPendingFlipPresent(
        CFlipExBuffer *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a2,
        char a3,
        bool *a4,
        bool *a5)
{
  bool v5; // sf
  bool v6; // of
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F Value; // r8d

  if ( a2->FenceValue )
    *((_QWORD *)this + 46) = a2->FenceValue;
  if ( a3 )
    ++*((_DWORD *)this + 88);
  *a5 = 0;
  v6 = __OFSUB__(*((_DWORD *)this + 97), 1);
  v5 = *((_DWORD *)this + 97) - 1 < 0;
  if ( *((int *)this + 97) >= 1 )
  {
    Value = (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F)a2->Flags.Value;
    if ( *((_DWORD *)this + 16) == ((*(_BYTE *)&Value >> 1) & 1)
      && *((_DWORD *)this + 26) == a2->Rotation
      && *((_DWORD *)this + 23) == ((*(_BYTE *)&Value >> 3) & 1)
      && *((_DWORD *)this + 40) == a2->CustomDuration
      && *((_DWORD *)this + 12) == ((*(unsigned int *)&Value >> 7) & 3)
      && *((_DWORD *)this + 24) == ((*(_BYTE *)&Value >> 4) & 1)
      && *((_DWORD *)this + 35) == a2->TargetRect.left
      && *((_DWORD *)this + 36) == a2->TargetRect.top
      && *((_DWORD *)this + 37) == a2->TargetRect.right
      && *((_DWORD *)this + 38) == a2->TargetRect.bottom
      && *((_DWORD *)this + 33) == a2->DestWidth
      && *((_DWORD *)this + 34) == a2->DestHeight
      && *((float *)this + 47) == a2->Transform[0]
      && *((float *)this + 48) == a2->Transform[1]
      && *((float *)this + 49) == a2->Transform[2]
      && *((float *)this + 50) == a2->Transform[3]
      && *((float *)this + 51) == a2->Transform[4]
      && *((float *)this + 52) == a2->Transform[5] )
    {
      if ( *((float *)this + 18) != a2->RevealColor[0]
        || *((float *)this + 19) != a2->RevealColor[1]
        || *((float *)this + 20) != a2->RevealColor[2]
        || *((float *)this + 21) != a2->RevealColor[3]
        || *((_DWORD *)this + 29) != a2->SourceRect.left
        || *((_DWORD *)this + 30) != a2->SourceRect.top
        || *((_DWORD *)this + 31) != a2->SourceRect.right
        || *((_DWORD *)this + 32) != a2->SourceRect.bottom
        || *((_DWORD *)this + 41) != a2->ColorSpace )
      {
        *a5 = 1;
      }
    }
    else
    {
      *((_DWORD *)this + 97) = -1;
    }
    v6 = __OFSUB__(*((_DWORD *)this + 97), 1);
    v5 = *((_DWORD *)this + 97) - 1 < 0;
  }
  *a4 = v5 == v6;
}
