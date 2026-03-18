/*
 * XREFs of GreGetBitmapDimension @ 0x14020F9FC
 * Callers:
 *     NtGdiGetBitmapDimension @ 0x14020F990 (NtGdiGetBitmapDimension.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1400182D8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall GreGetBitmapDimension(Gre::Base *a1, _QWORD *a2)
{
  unsigned int v4; // edi
  struct Gre::Base::SESSION_GLOBALS *v5; // rax
  ULONG v7; // ecx
  _BYTE v8[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v5 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v10, v5);
  SURFREF::SURFREF((SURFREF *)v8, (HSURF)a1);
  if ( !v9 )
  {
    v7 = 6;
LABEL_5:
    EngSetLastError(v7);
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(v9 + 112) & 0x4000000) != 0 )
  {
    if ( a2 )
    {
      v4 = 1;
      *a2 = *(_QWORD *)(v9 + 152);
      goto LABEL_3;
    }
    v7 = 87;
    goto LABEL_5;
  }
LABEL_3:
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v8);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v10);
  return v4;
}
