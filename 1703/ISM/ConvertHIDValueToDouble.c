/*
 * XREFs of ConvertHIDValueToDouble @ 0x180066504
 * Callers:
 *     ?HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@GGGGPEAM@Z @ 0x18006630C (-HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@GGGGPEAM@Z.c)
 * Callees:
 *     <none>
 */

double __fastcall ConvertHIDValueToDouble(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  int v3; // r8d
  double result; // xmm0_8
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  double v17; // xmm2_8
  double v18; // xmm4_8
  double v19; // xmm3_8
  int v20; // eax
  int v21; // ecx
  double v22; // xmm1_8
  __int64 v23; // rcx

  v2 = *(_DWORD *)(a2 + 32);
  v3 = a1;
  if ( v2 )
  {
    result = (double)(int)a1;
    if ( *(int *)(a2 + 40) >= 0 && a1 < 0 )
      result = result + 1.844674407370955e19;
    if ( v2 > 8 )
    {
      v11 = v2 - 9;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                v16 = v15 - 1;
                if ( v16 )
                {
                  if ( v16 == 1 )
                    return result * 0.1;
                }
                else
                {
                  return result * 0.01;
                }
              }
              else
              {
                return result * 0.001;
              }
            }
            else
            {
              return result * 0.0001;
            }
          }
          else
          {
            return result * 0.00001;
          }
        }
        else
        {
          return result * 0.000001;
        }
      }
      else
      {
        return result * 0.0000001;
      }
    }
    else if ( v2 == 8 )
    {
      return result * 0.00000001;
    }
    else
    {
      v5 = v2 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
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
                  if ( v10 == 1 )
                    return result * 10000000.0;
                }
                else
                {
                  return result * 1000000.0;
                }
              }
              else
              {
                return result * 100000.0;
              }
            }
            else
            {
              return result * 10000.0;
            }
          }
          else
          {
            return result * 1000.0;
          }
        }
        else
        {
          return result * 100.0;
        }
      }
      else
      {
        return result * 10.0;
      }
    }
  }
  else
  {
    v17 = 0.0;
    if ( *(_DWORD *)(a2 + 48) )
      v18 = (float)*(int *)(a2 + 48);
    else
      v18 = 0.0;
    if ( *(_DWORD *)(a2 + 52) )
      v19 = (float)*(int *)(a2 + 52);
    else
      v19 = DOUBLE_1_0;
    if ( v18 >= v19 )
      return DOUBLE_N2_147418113e9;
    if ( *(_DWORD *)(a2 + 40) )
      v17 = (float)*(int *)(a2 + 40);
    v20 = *(unsigned __int16 *)(a2 + 18);
    if ( *(_DWORD *)(a2 + 44) )
    {
      if ( v20 == 8 )
      {
        v23 = 255LL;
      }
      else if ( v20 == 16 )
      {
        v23 = 0xFFFFLL;
      }
      else
      {
        v23 = 0xFFFFFFFFLL;
        if ( v20 != 32 )
          v23 = 0LL;
      }
      v22 = (double)(int)(v23 & *(_DWORD *)(a2 + 44));
      if ( (v23 & *(int *)(a2 + 44)) < 0 )
        v22 = v22 + 1.844674407370955e19;
    }
    else
    {
      if ( v20 == 8 )
      {
        v21 = 255;
      }
      else if ( v20 == 16 )
      {
        v21 = 0xFFFF;
      }
      else
      {
        v21 = -1;
        if ( v20 != 32 )
          v21 = 0;
      }
      v22 = (double)v21;
    }
    if ( v17 >= v22 )
      return DOUBLE_N2_147418113e9;
    else
      return ((double)v3 - v17) / (v22 - v17) * (v19 - v18) + v18;
  }
  return result;
}
