/*
 * XREFs of ?SetFloatProperty@CNineGridBrushMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00EC180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CNineGridBrushMarshaler::SetFloatProperty(
        DirectComposition::CNineGridBrushMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  float *v11; // rax
  int v12; // edx

  v4 = 0;
  *a4 = 0;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 2;
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
              v10 = v9 - 2;
              if ( v10 )
              {
                if ( v10 != 1 )
                  return (unsigned int)-1073741811;
                v11 = (float *)((char *)this + 60);
                v12 = 2048;
              }
              else
              {
                v11 = (float *)((char *)this + 56);
                v12 = 128;
              }
            }
            else
            {
              v11 = (float *)((char *)this + 68);
              v12 = 4096;
            }
          }
          else
          {
            v11 = (float *)((char *)this + 64);
            v12 = 256;
          }
        }
        else
        {
          v11 = (float *)((char *)this + 52);
          v12 = 1024;
        }
      }
      else
      {
        v11 = (float *)((char *)this + 48);
        v12 = 64;
      }
    }
    else
    {
      v11 = (float *)((char *)this + 76);
      v12 = 0x2000;
    }
  }
  else
  {
    v11 = (float *)((char *)this + 72);
    v12 = 512;
  }
  if ( v11 && *v11 != a3 )
  {
    *v11 = a3;
    *((_DWORD *)this + 4) |= v12;
    *a4 = 1;
  }
  return v4;
}
