/*
 * XREFs of GreRectInRegion @ 0x1C000B8D0
 * Callers:
 *     NtGdiRectInRegion @ 0x1C0069B40 (NtGdiRectInRegion.c)
 *     EngRectInRgn @ 0x1C00BDEA0 (EngRectInRgn.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C003E0E0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00AEF50 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00B0F10 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreRectInRegion(HRGN a1, int *a2)
{
  unsigned int v3; // edi
  _DWORD *v4; // r8
  int v5; // r11d
  int v6; // edi
  signed int v7; // r10d
  signed int v8; // ebx
  int v9; // r9d
  unsigned int *v10; // rdx
  bool i; // zf
  __int64 v12; // r10
  _DWORD *v13; // rax
  unsigned __int64 v14; // rcx
  _DWORD *v16; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v17[40]; // [rsp+28h] [rbp-40h] BYREF
  int v18; // [rsp+50h] [rbp-18h]

  v3 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v16, a1, 1, 0);
  v4 = v16;
  if ( a2 && v16 )
  {
    v5 = *a2;
    if ( *a2 < v16[24] )
    {
      v6 = a2[2];
      if ( v6 > v16[22] )
      {
        v7 = a2[1];
        if ( v7 < v16[25] )
        {
          v8 = a2[3];
          if ( v8 > v16[23] )
          {
            v9 = v16[21];
            v10 = v16 + 26;
            if ( v9 )
            {
              do
              {
                if ( v7 < (int)v10[2] )
                  break;
                v10 += *v10 + 4;
                --v9;
              }
              while ( v9 );
              for ( i = v9 == 0; !i && v8 > (int)v10[1]; i = v9-- == 1 )
              {
                v12 = *v10;
                v13 = v10 + 3;
                v14 = (unsigned __int64)&v10[v12 + 3];
                if ( (unsigned __int64)(v10 + 3) < v14 )
                {
                  do
                  {
                    if ( v5 < v13[1] )
                      break;
                    v13 += 2;
                  }
                  while ( (unsigned __int64)v13 < v14 );
                  if ( (unsigned __int64)v13 < v14 && v6 > *v13 )
                  {
                    v3 = 1;
                    goto LABEL_21;
                  }
                }
                v10 = (unsigned int *)((char *)v10 + (unsigned int)(4 * v12 + 16));
              }
            }
          }
        }
      }
    }
    v3 = 0;
  }
LABEL_21:
  if ( !v18 )
  {
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v16);
    v4 = v16;
  }
  if ( v4 )
    _InterlockedDecrement(v4 + 3);
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v17);
  return v3;
}
