/*
 * XREFs of ?UpdateAlignmentTransform@CText@@AEAAJXZ @ 0x18001AEE0
 * Callers:
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x18001B00C (-ValidateResources@CText@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CText::UpdateAlignmentTransform(CText *this)
{
  CResource *v1; // r9
  unsigned int v2; // ebx
  int v3; // eax
  int v4; // eax
  _DWORD v6[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v7; // [rsp+38h] [rbp-40h]
  __int128 v8; // [rsp+48h] [rbp-30h]
  __int64 v9; // [rsp+58h] [rbp-20h]
  double v10; // [rsp+60h] [rbp-18h]

  v1 = (CResource *)*((_QWORD *)this + 47);
  v2 = 0;
  if ( v1 )
  {
    v3 = *((_DWORD *)this + 29) - *((_DWORD *)this + 97);
    v6[1] = 0;
    v7 = _xmm;
    v6[0] = 250;
    v9 = 0LL;
    v8 = _xmm;
    v10 = (double)(v3 / 2);
    v4 = CResource::Send(v1, v6, 0x38u);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x27Bu);
  }
  return v2;
}
