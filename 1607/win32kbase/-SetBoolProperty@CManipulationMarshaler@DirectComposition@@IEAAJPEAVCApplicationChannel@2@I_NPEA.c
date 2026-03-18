/*
 * XREFs of ?SetBoolProperty@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@I_NPEA_N@Z @ 0x1C00E6238
 * Callers:
 *     ?SetIntegerProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00E6350 (-SetIntegerProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_J.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::SetBoolProperty(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        char a4,
        bool *a5)
{
  unsigned int v5; // r10d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  bool *v11; // rdx
  char v12; // al
  char v13; // al
  char v14; // al
  char v15; // al
  char v16; // al
  char v17; // al
  char v18; // al

  v5 = 0;
  v6 = a3 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 != 1 )
              return (unsigned int)-1073741811;
            v11 = a5;
            v12 = (*((_BYTE *)this + 44) & 4) != 0;
            if ( v12 != a4 )
            {
              v12 = a4;
              *a5 = 1;
            }
            v13 = (*((_BYTE *)this + 44) ^ (4 * v12)) & 4;
          }
          else
          {
            v11 = a5;
            v14 = (*((_BYTE *)this + 44) & 2) != 0;
            if ( v14 != a4 )
            {
              v14 = a4;
              *a5 = 1;
            }
            v13 = (*((_BYTE *)this + 44) ^ (2 * v14)) & 2;
          }
        }
        else
        {
          v11 = a5;
          v15 = *((_BYTE *)this + 44) & 1;
          if ( v15 != a4 )
          {
            v15 = a4;
            *a5 = 1;
          }
          v13 = (*((_BYTE *)this + 44) ^ v15) & 1;
        }
      }
      else
      {
        v11 = a5;
        v16 = (*((_BYTE *)this + 44) & 0x20) != 0;
        if ( v16 != a4 )
        {
          v16 = a4;
          *a5 = 1;
        }
        v13 = (*((_BYTE *)this + 44) ^ (32 * v16)) & 0x20;
      }
    }
    else
    {
      v11 = a5;
      v17 = (*((_BYTE *)this + 44) & 0x10) != 0;
      if ( v17 != a4 )
      {
        v17 = a4;
        *a5 = 1;
      }
      v13 = (*((_BYTE *)this + 44) ^ (16 * v17)) & 0x10;
    }
  }
  else
  {
    v11 = a5;
    v18 = (*((_BYTE *)this + 44) & 8) != 0;
    if ( v18 != a4 )
    {
      v18 = a4;
      *a5 = 1;
    }
    v13 = (*((_BYTE *)this + 44) ^ (8 * v18)) & 8;
  }
  *((_BYTE *)this + 44) ^= v13;
  if ( *v11 )
    *((_DWORD *)this + 4) |= 0x20u;
  return v5;
}
