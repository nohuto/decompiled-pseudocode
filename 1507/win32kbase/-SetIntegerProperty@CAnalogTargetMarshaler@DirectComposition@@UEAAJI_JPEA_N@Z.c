/*
 * XREFs of ?SetIntegerProperty@CAnalogTargetMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00DB940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAnalogTargetMarshaler::SetIntegerProperty(
        DirectComposition::CAnalogTargetMarshaler *this,
        int a2,
        __int64 a3,
        bool *a4)
{
  __int64 result; // rax
  int v5; // edx
  int v6; // edx
  int v7; // edx
  __int64 v8; // r8
  __int64 v9; // r8

  result = 0LL;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 != 3 )
            return 3221225485LL;
          *((_DWORD *)this + 4) |= 0x100u;
          *((_DWORD *)this + 13) = a3;
        }
        else
        {
          *((_DWORD *)this + 12) = a3;
        }
      }
      else
      {
        *((_DWORD *)this + 11) = a3;
      }
    }
    else
    {
      *((_DWORD *)this + 10) = a3;
    }
  }
  else
  {
    v8 = a3 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
          return 3221225485LL;
        *((_DWORD *)this + 15) = 3;
      }
      else
      {
        *((_DWORD *)this + 15) = 2;
      }
    }
    else
    {
      *((_DWORD *)this + 15) = 1;
    }
    *((_DWORD *)this + 4) |= 0x40u;
  }
  *a4 = 1;
  return result;
}
