/*
 * XREFs of ?PopulateEffectTable@CD2DContext@@AEAAJXZ @ 0x18007C8F8
 * Callers:
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x18007E428 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x18007C8B0 (-ReleaseEffectTable@CD2DContext@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::PopulateEffectTable(CD2DContext *this)
{
  _BYTE *v2; // rsi
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdi
  _QWORD *v6; // r14
  int v7; // eax
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v2 = &unk_1801EAB64;
  v3 = 0LL;
  v4 = 0;
  v9 = 0LL;
  v5 = 0LL;
  v6 = (_QWORD *)((char *)this + 64);
  while ( !*v2 )
  {
LABEL_5:
    v5 = (unsigned int)(v5 + 1);
    ++v6;
    v2 += 24;
    if ( (unsigned int)v5 >= 9 )
      goto LABEL_6;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64 *))(**((_QWORD **)this + 5) + 504LL))(
         *((_QWORD *)this + 5),
         (char *)&unk_1801EAB54 + 24 * v5,
         &v9);
  v4 = v7;
  if ( v7 >= 0 )
  {
    *v6 = v9;
    v3 = 0LL;
    v9 = 0LL;
    goto LABEL_5;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB23u);
  v3 = v9;
LABEL_6:
  if ( v4 < 0 )
  {
    CD2DContext::ReleaseEffectTable(this);
    v3 = v9;
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)v4;
}
