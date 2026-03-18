/*
 * XREFs of ??1CComposeTop@@UEAA@XZ @ 0x180106848
 * Callers:
 *     ??_GCComposeTop@@UEAAPEAXI@Z @ 0x1801069D0 (--_GCComposeTop@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CComposeTop::~CComposeTop(CComposeTop *this)
{
  void (__fastcall ***v1)(_QWORD, __int64); // rsi
  void (__fastcall ***v3)(_QWORD, __int64); // rsi
  __int64 v4; // rdi

  v1 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 2);
  *(_QWORD *)this = &CComposeTop::`vftable';
  if ( v1 )
    (**v1)(v1, 1LL);
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 19);
  if ( v3 )
    (**v3)(*((_QWORD *)this + 19), 1LL);
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
}
