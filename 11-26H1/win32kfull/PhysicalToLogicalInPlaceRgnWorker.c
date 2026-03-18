/*
 * XREFs of PhysicalToLogicalInPlaceRgnWorker @ 0x14002EC34
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x14002D070 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x14002EC1C (PhysicalToLogicalInPlaceRgn.c)
 * Callees:
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14002EDBC (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     ?TransformRgn@@YAPEAUHRGN__@@PEAU1@PEAUtagXFORM@@@Z @ 0x1401EC06C (-TransformRgn@@YAPEAUHRGN__@@PEAU1@PEAUtagXFORM@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall PhysicalToLogicalInPlaceRgnWorker(struct tagWND *a1, HRGN *a2, __int64 a3)
{
  unsigned int v3; // edi
  struct tagWND *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v11; // rax
  float v12; // xmm6_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  HRGN v15; // rax
  float v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+24h] [rbp-44h]
  float v18; // [rsp+2Ch] [rbp-3Ch]
  float v19; // [rsp+30h] [rbp-38h]
  float v20; // [rsp+34h] [rbp-34h]

  v3 = 0;
  v5 = a1;
  if ( (_DWORD)a3 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96) + 120LL) )
    {
      while ( v5 )
      {
        v7 = *((_QWORD *)v5 + 13);
        if ( v7 )
        {
          v8 = *((_QWORD *)v5 + 3);
          if ( v8 )
          {
            v9 = *(_QWORD *)(v8 + 8);
            if ( v9 )
            {
              if ( v7 == *(_QWORD *)(v9 + 24) )
                break;
            }
          }
        }
        if ( IsChildWindowDpiBoundary(v5) )
          break;
        v5 = (struct tagWND *)*((_QWORD *)v5 + 13);
      }
    }
    else
    {
      while ( v5 && !(unsigned int)IsTopLevelWindow(v5, v6) )
        v5 = (struct tagWND *)*((_QWORD *)v5 + 13);
    }
  }
  if ( (unsigned __int64)*a2 > 2 )
  {
    if ( v5 )
    {
      if ( *((_QWORD *)v5 + 27) )
      {
        if ( (unsigned int)IsWindowDesktopComposed(v5) )
        {
          v11 = *((_QWORD *)v5 + 27);
          v17 = 0LL;
          v16 = 1.0 / *(float *)v11;
          v12 = 1.0 / *(float *)(v11 + 20);
          v18 = v12;
          v13 = COERCE_FLOAT(*(_DWORD *)(v11 + 48) ^ _xmm) / *(float *)v11;
          v19 = v13;
          v14 = COERCE_FLOAT(*(_DWORD *)(v11 + 52) ^ _xmm) / *(float *)(v11 + 20);
          v20 = v14;
          if ( v16 != 1.0 || v12 != 1.0 || v13 != 0.0 || v14 != 0.0 )
          {
            v15 = TransformRgn(*a2, (struct tagXFORM *)&v16);
            if ( v15 )
            {
              v3 = 1;
              *a2 = v15;
            }
          }
        }
      }
    }
  }
  return v3;
}
