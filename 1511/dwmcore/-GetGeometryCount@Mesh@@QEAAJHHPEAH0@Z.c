/*
 * XREFs of ?GetGeometryCount@Mesh@@QEAAJHHPEAH0@Z @ 0x180020048
 * Callers:
 *     ?AppendGeometry@CDrawListPrimitiveBuilder@@IEAAJ_N0@Z @ 0x18003431C (-AppendGeometry@CDrawListPrimitiveBuilder@@IEAAJ_N0@Z.c)
 * Callees:
 *     ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x1800182E4 (-InitMeshGraph@Mesh@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall Mesh::GetGeometryCount(Mesh *this, int a2, int a3, int *a4, int *a5)
{
  int v5; // eax
  int v10; // esi
  int v11; // ebp
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int *v15; // rdx
  int v16; // ecx
  int v17; // r8d
  __int64 v18; // r9
  __int64 v19; // rax
  int inited; // eax
  __int64 v21; // r8
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // [rsp+30h] [rbp-58h] BYREF
  int v25; // [rsp+34h] [rbp-54h]
  int v26; // [rsp+38h] [rbp-50h]
  int v27; // [rsp+3Ch] [rbp-4Ch]

  v5 = *((_DWORD *)this + 26);
  if ( (v5 & 1) != 0 )
  {
    v10 = *((_DWORD *)this + 3);
    v11 = 0;
    v12 = *((_QWORD *)this + 3);
    if ( !v12 || (v5 & 0x10) != 0 || (v5 & 8) != 0 )
    {
      inited = Mesh::InitMeshGraph(this);
      v13 = inited;
      if ( inited < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inited, 0x128Du);
        return v13;
      }
      if ( a2 )
        v11 = 3
            * (*(_DWORD *)(*((_QWORD *)this + 2) + 100LL)
             + 2 * (*(_DWORD *)(*((_QWORD *)this + 2) + 92LL) - *(_DWORD *)(*((_QWORD *)this + 2) + 104LL)));
      if ( a3 )
      {
        if ( (*((_BYTE *)this + 104) & 0x40) != 0 )
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
                v10 = v23 + v10 - 1;
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
        v15 = &v24;
        v16 = *((_DWORD *)this + 19);
        v17 = 0;
        v25 = *((_DWORD *)this + 20);
        v18 = -1LL;
        v27 = v25;
        v24 = v16;
        v26 = v16;
        do
        {
          if ( *(int *)((char *)v15 + this - (Mesh *)&v24 + 88) == 12 )
          {
            v11 = v11 + 6 * *v15 - 6;
            v10 = *v15 + v10 - 1;
          }
          else
          {
            v19 = v18;
            if ( !v17 )
              v19 = 3LL;
            if ( *((_DWORD *)this + v19 + 22) == 12 )
              ++v10;
          }
          ++v17;
          ++v15;
          ++v18;
        }
        while ( (unsigned __int64)v17 < 4 );
      }
    }
    *a4 = v10;
    v13 = 0;
    *a5 = v11;
  }
  else
  {
    v13 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x1264u);
  }
  return v13;
}
