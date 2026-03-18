/*
 * XREFs of ?GetVerticesCore@CGeometry2DGroup@@MEAAJPEAUMilVertexXYZDUV2@@I@Z @ 0x180133320
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGeometry2DGroup::GetVerticesCore(
        CGeometry2DGroup *this,
        struct MilVertexXYZDUV2 *a2,
        unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned int v7; // eax
  __int64 i; // rsi
  __int64 v9; // r14
  unsigned int v10; // r12d
  int v11; // eax

  v3 = 0;
  v7 = *((_DWORD *)this + 8) ^ (*((_DWORD *)this + 8) ^ ((*((_DWORD *)this + 8) & 0xFFFFFFFE) + 2)) & 6;
  *((_DWORD *)this + 8) = v7;
  if ( (v7 & 6) == 2 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 20); i = (unsigned int)(i + 1) )
    {
      v9 = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * i);
      if ( v9 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 104LL))(v9);
        v11 = (*(__int64 (__fastcall **)(__int64, struct MilVertexXYZDUV2 *, _QWORD))(*(_QWORD *)v9 + 144LL))(
                v9,
                a2,
                a3);
        v3 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1C3u);
          break;
        }
        a2 = (struct MilVertexXYZDUV2 *)((char *)a2 + 32 * v10);
        a3 -= v10;
      }
    }
  }
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return v3;
}
