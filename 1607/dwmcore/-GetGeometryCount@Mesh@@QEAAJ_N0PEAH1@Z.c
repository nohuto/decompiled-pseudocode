/*
 * XREFs of ?GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z @ 0x1800927D8
 * Callers:
 *     ?AppendGeometry@CDrawListPrimitiveBuilder@@IEAAJ_N0@Z @ 0x18009644C (-AppendGeometry@CDrawListPrimitiveBuilder@@IEAAJ_N0@Z.c)
 * Callees:
 *     ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x180002488 (-InitMeshGraph@Mesh@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall Mesh::GetGeometryCount(Mesh *this, char a2, char a3, int *a4, int *a5)
{
  int v5; // eax
  int v10; // edi
  int v11; // ebp
  __int64 v12; // rcx
  int *v13; // rdx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // r9
  unsigned int v17; // ebx
  __int64 v19; // rax
  int inited; // eax
  __int64 v21; // r10
  __int64 v22; // rdx
  int v23; // ecx
  _QWORD *i; // rcx
  __int64 v25; // r8
  int v26; // [rsp+30h] [rbp-58h] BYREF
  int v27; // [rsp+34h] [rbp-54h]
  int v28; // [rsp+38h] [rbp-50h]
  int v29; // [rsp+3Ch] [rbp-4Ch]

  v5 = *((_DWORD *)this + 48);
  if ( (v5 & 1) != 0 )
  {
    v10 = *((_DWORD *)this + 3);
    v11 = 0;
    v12 = *((_QWORD *)this + 3);
    if ( !v12 || (v5 & 0x10) != 0 || (v5 & 8) != 0 )
    {
      inited = Mesh::InitMeshGraph(this);
      v17 = inited;
      if ( inited < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inited, 0xF64u);
        return v17;
      }
      if ( a2 )
        v11 = 3
            * (*(_DWORD *)(*((_QWORD *)this + 2) + 100LL)
             + 2 * (*(_DWORD *)(*((_QWORD *)this + 2) + 92LL) - *(_DWORD *)(*((_QWORD *)this + 2) + 104LL)));
      if ( a3 )
      {
        if ( (*((_BYTE *)this + 192) & 0x40) != 0 )
        {
          v21 = *(_QWORD *)(*((_QWORD *)this + 2) + 64LL);
          v22 = v21;
          if ( v21 )
          {
            do
            {
              if ( (*(_BYTE *)(v22 + 32) & 0xC) == 0xC )
              {
                v23 = *(_DWORD *)(v22 + 64);
                v11 = v11 + 6 * v23 - 6;
                v10 += v23 - 1;
                for ( i = *(_QWORD **)(v22 + 48); i; i = (_QWORD *)i[8] )
                {
                  if ( i[3] != i[4] )
                  {
                    if ( (v25 = *(_QWORD *)(v22 + 80), *i != **(_QWORD **)(v25 + 48)) && *i != **(_QWORD **)(v25 + 56)
                      || (*(_BYTE *)(v25 + 32) & 0xC) != 0xC )
                    {
                      ++v10;
                    }
                  }
                }
              }
              else if ( (*(_BYTE *)(*(_QWORD *)(v22 + 72) + 32LL) & 0xC) == 0xC )
              {
                ++v10;
              }
              v22 = *(_QWORD *)(v22 + 80);
            }
            while ( v22 != v21 && v22 );
          }
        }
      }
    }
    else
    {
      if ( a2 )
        v11 = *(_DWORD *)(v12 + 128);
      if ( a3 && (v5 & 0x40) != 0 )
      {
        v13 = &v26;
        v14 = *((_DWORD *)this + 41);
        v15 = 0;
        v27 = *((_DWORD *)this + 42);
        v16 = -1LL;
        v29 = v27;
        v26 = v14;
        v28 = v14;
        do
        {
          if ( *(int *)((char *)v13 + this - (Mesh *)&v26 + 176) == 12 )
          {
            v11 = v11 + 6 * *v13 - 6;
            v10 = *v13 + v10 - 1;
          }
          else
          {
            v19 = v16;
            if ( !v15 )
              v19 = 3LL;
            if ( *((_DWORD *)this + v19 + 44) == 12 )
              ++v10;
          }
          ++v15;
          ++v13;
          ++v16;
        }
        while ( (unsigned __int64)v15 < 4 );
      }
    }
    *a4 = v10;
    v17 = 0;
    *a5 = v11;
  }
  else
  {
    v17 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0xF3Bu);
  }
  return v17;
}
