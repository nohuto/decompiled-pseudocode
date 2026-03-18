/*
 * XREFs of ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180145F30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180052658 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z @ 0x18005F0E8 (-ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x18005F330 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x180062A80 (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z @ 0x1801463A4 (-CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z.c)
 *     ?Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z @ 0x180146EEC (-Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z.c)
 */

__int64 __fastcall CFormatConverter::CopyPixels(
        CFormatConverter *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  unsigned int v5; // r10d
  char *v8; // rcx
  int v9; // r14d
  int v10; // r9d
  int v11; // eax
  __int64 v12; // rdi
  INT Y; // esi
  void (__fastcall ***v14)(_QWORD, GUID *, unsigned int *); // rdi
  unsigned int *v15; // r8
  __int64 v16; // rax
  INT Width; // ecx
  bool v18; // r13
  bool v19; // zf
  INT Height; // eax
  signed int v21; // r12d
  unsigned __int8 *v22; // rbx
  unsigned int v24; // [rsp+20h] [rbp-A1h]
  unsigned int v25; // [rsp+60h] [rbp-61h] BYREF
  unsigned int v26[2]; // [rsp+68h] [rbp-59h] BYREF
  unsigned int v27; // [rsp+70h] [rbp-51h]
  unsigned int v28; // [rsp+74h] [rbp-4Dh]
  __int64 v29; // [rsp+78h] [rbp-49h] BYREF
  unsigned __int8 *v30; // [rsp+80h] [rbp-41h] BYREF
  int X; // [rsp+88h] [rbp-39h]
  unsigned int v32; // [rsp+8Ch] [rbp-35h] BYREF
  unsigned int v33; // [rsp+90h] [rbp-31h] BYREF
  char *v34; // [rsp+98h] [rbp-29h] BYREF
  CFormatConverter *v35[2]; // [rsp+A0h] [rbp-21h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-11h] BYREF
  int v37; // [rsp+B8h] [rbp-9h]
  int v38; // [rsp+BCh] [rbp-5h]

  v28 = a4;
  v27 = a3;
  v5 = a3;
  v30 = a5;
  v29 = 0LL;
  v35[0] = (CFormatConverter *)((char *)this - 72);
  if ( this == (CFormatConverter *)72 )
    v8 = 0LL;
  else
    v8 = (char *)this - 56;
  v34 = v8;
  if ( v8[48] )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 8));
    a4 = v28;
    v5 = v27;
  }
  if ( !a5 )
  {
    v9 = -2147024809;
    v24 = 231;
LABEL_8:
    v10 = v9;
LABEL_9:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v24);
    goto LABEL_43;
  }
  if ( !*((_QWORD *)this + 1) )
  {
    v9 = -2003292404;
    v24 = 236;
    goto LABEL_8;
  }
  if ( !a2 )
  {
    a2 = (const struct WICRect *)&v36;
    v37 = *((_DWORD *)this + 16);
    v38 = *((_DWORD *)this + 17);
    v36 = 0LL;
  }
  v11 = HrCheckBufferSize(*((_DWORD *)this + 10), v5, a2, a4);
  v9 = v11;
  if ( v11 < 0 )
  {
    v24 = 249;
LABEL_16:
    v10 = v11;
    goto LABEL_9;
  }
  v12 = *((_QWORD *)this + 1);
  Y = a2->Y;
  X = a2->X;
  v25 = Y;
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 80LL))(v12) - 2 <= 1 )
  {
    v14 = (void (__fastcall ***)(_QWORD, GUID *, unsigned int *))*((_QWORD *)this + 1);
    *(_QWORD *)v26 = 0LL;
    (**v14)(v14, &GUID_14d094dc_1246_4784_b811_74305a3ecec8, v26);
    if ( *(_QWORD *)v26 )
    {
      (*(void (__fastcall **)(_QWORD, const struct WICRect *, __int64, __int64 *))(**(_QWORD **)v26 + 24LL))(
        *(_QWORD *)v26,
        a2,
        1LL,
        &v29);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v26 + 16LL))(*(_QWORD *)v26);
    }
  }
  if ( v29 )
  {
    v30 = 0LL;
    v32 = 0;
    v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v29 + 72LL))(
            v29,
            &v32,
            &v30);
    v9 = v11;
    if ( v11 < 0 )
    {
      v24 = 284;
      goto LABEL_16;
    }
    v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)v29 + 56LL))(v29, &v25, v26);
    v9 = v11;
    if ( v11 < 0 )
    {
      v24 = 292;
      goto LABEL_16;
    }
    v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v29 + 64LL))(v29, &v33);
    v9 = v11;
    if ( v11 < 0 )
    {
      v24 = 298;
      goto LABEL_16;
    }
    v11 = CFormatConverter::CopyPixelsHelper(v35[0], X, Y, v25, v26[0], v33, v32, v30, v27, v28, a5);
    v9 = v11;
    if ( v11 < 0 )
    {
      v24 = 312;
      goto LABEL_16;
    }
  }
  else
  {
    if ( !*((_QWORD *)this + 93) )
    {
      v11 = HrCalcDWordAlignedScanlineStride(
              *((unsigned int *)this + 16),
              *((_DWORD *)this + 4),
              (unsigned int *)this + 188);
      v9 = v11;
      if ( v11 < 0 )
      {
        v24 = 323;
        goto LABEL_16;
      }
      v16 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
              WPF::g_pProcessHeap,
              *v15);
      *((_QWORD *)this + 93) = v16;
      if ( !v16 )
      {
        v9 = -2147024882;
        v24 = 326;
        goto LABEL_8;
      }
    }
    Width = a2->Width;
    v18 = 0;
    v19 = a2->X == 0;
    Height = a2->Height;
    *(struct WICRect *)v35 = *a2;
    HIDWORD(v35[1]) = 1;
    v26[0] = Width;
    if ( v19 && !a2->Y && Width == *((_DWORD *)this + 16) )
      v18 = Height == *((_DWORD *)this + 17);
    v21 = v25;
    v25 += Height;
    if ( v21 < (int)v25 )
    {
      while ( 1 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, CFormatConverter **, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 1)
                                                                                             + 72LL))(
                *((_QWORD *)this + 1),
                v35,
                *((unsigned int *)this + 188),
                *((unsigned int *)this + 188),
                *((_QWORD *)this + 93));
        v9 = v11;
        if ( v11 < 0 )
          break;
        v22 = v30;
        CScanPipeline::Run((CFormatConverter *)((char *)this + 80), v30, *((const void **)this + 93), v26[0], X, v21);
        ++HIDWORD(v35[0]);
        ++v21;
        v30 = &v22[v27];
        if ( v21 >= (int)v25 )
          goto LABEL_41;
      }
      v24 = 377;
      goto LABEL_16;
    }
LABEL_41:
    if ( v18 )
      ReleaseDecoderCopyBuffers(*((struct IUnknown **)this + 1));
  }
LABEL_43:
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x19Cu);
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v34);
  return (unsigned int)v9;
}
