/*
 * XREFs of ?UpdatePropertyValue@CPropertyBagMarshaler@DirectComposition@@AEAAJPEAUPropertyUpdate@@_K@Z @ 0x1C00D9D84
 * Callers:
 *     ?SetBufferProperty@CPropertyBagMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00D9B20 (-SetBufferProperty@CPropertyBagMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX.c)
 * Callees:
 *     SizeTAdd @ 0x1C00D9EDC (SizeTAdd.c)
 */

__int64 __fastcall DirectComposition::CPropertyBagMarshaler::UpdatePropertyValue(
        DirectComposition::CPropertyBagMarshaler *this,
        struct PropertyUpdate *a2,
        __int64 a3)
{
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  size_t pResult; // [rsp+38h] [rbp+10h] BYREF

  if ( SizeTAdd(*((unsigned int *)a2 + 2), a3 - 16, &pResult) >= 0 && *((_QWORD *)this + 7) >= pResult )
  {
    v7 = *((_QWORD *)this + 6);
    v8 = *(_DWORD *)(v4 + 12);
    if ( *(_DWORD *)(v5 + v7) == v8 )
    {
      v9 = v8 - 18;
      if ( v9 )
      {
        v10 = v9 - 17;
        if ( v10 )
        {
          v11 = v10 - 17;
          if ( v11 )
          {
            v12 = v11 - 17;
            if ( v12 && (v13 = v12 - 1) != 0 && (v14 = v13 - 1) != 0 )
            {
              v15 = v14 - 33;
              if ( v15 )
              {
                if ( v15 == 161 && v6 == 80 )
                {
                  *(_OWORD *)(v5 + v7 + 12) = *(_OWORD *)(v4 + 16);
                  *(_OWORD *)(v5 + v7 + 28) = *(_OWORD *)(v4 + 32);
                  *(_OWORD *)(v5 + v7 + 44) = *(_OWORD *)(v4 + 48);
                  *(_OWORD *)(v5 + v7 + 60) = *(_OWORD *)(v4 + 64);
                  return DirectComposition::CPropertyBagMarshaler::AddPropertyUpdate(this, (struct PropertyUpdate *)v4);
                }
              }
              else if ( v6 == 40 )
              {
                *(_OWORD *)(v5 + v7 + 12) = *(_OWORD *)(v4 + 16);
                *(_QWORD *)(v5 + v7 + 28) = *(_QWORD *)(v4 + 32);
                return DirectComposition::CPropertyBagMarshaler::AddPropertyUpdate(this, (struct PropertyUpdate *)v4);
              }
            }
            else if ( v6 == 32 )
            {
              *(_OWORD *)(v5 + v7 + 12) = *(_OWORD *)(v4 + 16);
              return DirectComposition::CPropertyBagMarshaler::AddPropertyUpdate(this, (struct PropertyUpdate *)v4);
            }
          }
          else if ( v6 == 28 )
          {
            *(_QWORD *)(v5 + v7 + 12) = *(_QWORD *)(v4 + 16);
            *(_DWORD *)(v5 + v7 + 20) = *(_DWORD *)(v4 + 24);
            return DirectComposition::CPropertyBagMarshaler::AddPropertyUpdate(this, (struct PropertyUpdate *)v4);
          }
        }
        else if ( v6 == 24 )
        {
          *(_QWORD *)(v5 + v7 + 12) = *(_QWORD *)(v4 + 16);
          return DirectComposition::CPropertyBagMarshaler::AddPropertyUpdate(this, (struct PropertyUpdate *)v4);
        }
      }
      else if ( v6 == 20 )
      {
        *(_DWORD *)(v5 + v7 + 12) = *(_DWORD *)(v4 + 16);
        return DirectComposition::CPropertyBagMarshaler::AddPropertyUpdate(this, (struct PropertyUpdate *)v4);
      }
    }
  }
  return 3221225485LL;
}
