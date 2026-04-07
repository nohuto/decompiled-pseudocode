/*
 * XREFs of ?EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ @ 0x180043698
 * Callers:
 *     ?GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z @ 0x18003B110 (-GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z.c)
 *     ?DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x1800434F4 (-DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompressedSourceBitmap::EnsureWICBitmapFrame(CCompressedSourceBitmap *this)
{
  unsigned int v1; // ebx
  _QWORD *v2; // rsi
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  int v8; // r9d
  unsigned int v9; // [rsp+20h] [rbp-10h]
  __int64 v10; // [rsp+50h] [rbp+20h] BYREF
  __int64 v11; // [rsp+58h] [rbp+28h] BYREF
  __int64 v12; // [rsp+60h] [rbp+30h]

  v1 = 0;
  v2 = (_QWORD *)((char *)this + 272);
  v10 = 0LL;
  v11 = 0LL;
  if ( *((_QWORD *)this + 34) )
    return v1;
  v4 = *((_QWORD *)this + 38);
  v12 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 112LL))(v4, &v10);
  v1 = v5;
  if ( v5 < 0 )
  {
    v9 = 254;
LABEL_21:
    v8 = v5;
    goto LABEL_22;
  }
  if ( !v10 )
  {
    v8 = -2147024890;
    v9 = 255;
    v1 = -2147024890;
LABEL_22:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v9);
    goto LABEL_9;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 128LL))(
         v10,
         *((_QWORD *)this + 36),
         *((unsigned int *)this + 74));
  v1 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x102u);
    goto LABEL_9;
  }
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 40LL))(v10, v12, 0LL, 0LL);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, GUID *, _QWORD, __int64 *))(**((_QWORD **)this + 38) + 32LL))(
         *((_QWORD *)this + 38),
         v10,
         &GUID_VendorMicrosoft,
         0LL,
         &v11);
  v1 = v5;
  if ( v5 < 0 )
  {
    v9 = 265;
    goto LABEL_21;
  }
  if ( !v11 )
  {
    v8 = -2147024890;
    v9 = 266;
    v1 = -2147024890;
    goto LABEL_22;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v11 + 104LL))(v11, 0LL, v2);
  v1 = v5;
  if ( v5 < 0 )
  {
    v9 = 268;
    goto LABEL_21;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(*(_QWORD *)*v2 + 24LL))(
         *v2,
         (char *)this + 184,
         (char *)this + 188);
  v1 = v5;
  if ( v5 < 0 )
  {
    v9 = 273;
    goto LABEL_21;
  }
LABEL_9:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v1;
}
