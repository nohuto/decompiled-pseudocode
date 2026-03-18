/*
 * XREFs of ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1801844C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18009E978 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x18009F55C (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     ?ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z @ 0x1800B4730 (-ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x1800B47EC (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z @ 0x180184898 (-CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z.c)
 *     ?Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z @ 0x1801853E8 (-Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z.c)
 */

__int64 __fastcall CFormatConverter::CopyPixels(
        CFormatConverter *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  unsigned __int8 *v5; // r12
  CFormatConverter *v6; // r13
  unsigned int v8; // r10d
  char *v11; // rcx
  int v12; // ebx
  int v13; // r9d
  int v14; // eax
  __int64 v15; // rcx
  INT Y; // r15d
  void (__fastcall ***v17)(_QWORD, GUID *, unsigned int *); // rcx
  unsigned int *v18; // r8
  __int64 v19; // rax
  INT Height; // eax
  bool v21; // r14
  bool v22; // zf
  INT Width; // r13d
  INT v24; // esi
  unsigned int v26; // [rsp+20h] [rbp-91h]
  unsigned int v28; // [rsp+64h] [rbp-4Dh] BYREF
  int X; // [rsp+68h] [rbp-49h]
  unsigned int v30[2]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v31; // [rsp+78h] [rbp-39h] BYREF
  unsigned int v32; // [rsp+80h] [rbp-31h] BYREF
  unsigned int v33; // [rsp+84h] [rbp-2Dh] BYREF
  char *v34; // [rsp+88h] [rbp-29h] BYREF
  unsigned __int8 *v35[2]; // [rsp+90h] [rbp-21h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-11h] BYREF
  int v37; // [rsp+A8h] [rbp-9h]
  int v38; // [rsp+ACh] [rbp-5h]

  v5 = a5;
  v6 = (CFormatConverter *)((char *)this - 72);
  v31 = 0LL;
  v8 = a3;
  if ( this == (CFormatConverter *)72 )
    v11 = 0LL;
  else
    v11 = (char *)this - 56;
  v34 = v11;
  if ( v11[48] )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v11 + 8));
    v8 = a3;
  }
  if ( !a5 )
  {
    v12 = -2147024809;
    v26 = 231;
LABEL_8:
    v13 = v12;
LABEL_44:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v26);
    goto LABEL_45;
  }
  if ( !*((_QWORD *)this + 1) )
  {
    v12 = -2003292404;
    v26 = 236;
    goto LABEL_8;
  }
  if ( !a2 )
  {
    a2 = (const struct WICRect *)&v36;
    v37 = *((_DWORD *)this + 16);
    v38 = *((_DWORD *)this + 17);
    v36 = 0LL;
  }
  v14 = HrCheckBufferSize(*((_DWORD *)this + 10), v8, a2, a4);
  v12 = v14;
  if ( v14 < 0 )
  {
    v26 = 249;
    goto LABEL_43;
  }
  v15 = *((_QWORD *)this + 1);
  Y = a2->Y;
  X = a2->X;
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v15 + 80LL))(v15) - 2 <= 1 )
  {
    v17 = (void (__fastcall ***)(_QWORD, GUID *, unsigned int *))*((_QWORD *)this + 1);
    *(_QWORD *)v30 = 0LL;
    (**v17)(v17, &GUID_14d094dc_1246_4784_b811_74305a3ecec8, v30);
    if ( *(_QWORD *)v30 )
    {
      (*(void (__fastcall **)(_QWORD, const struct WICRect *, __int64, __int64 *))(**(_QWORD **)v30 + 24LL))(
        *(_QWORD *)v30,
        a2,
        1LL,
        &v31);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v30 + 16LL))(*(_QWORD *)v30);
    }
  }
  if ( v31 )
  {
    v35[0] = 0LL;
    v28 = 0;
    v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v31 + 72LL))(
            v31,
            &v28,
            v35);
    v12 = v14;
    if ( v14 < 0 )
    {
      v26 = 284;
    }
    else
    {
      v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)v31 + 56LL))(v31, v30, &v33);
      v12 = v14;
      if ( v14 < 0 )
      {
        v26 = 292;
      }
      else
      {
        v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v31 + 64LL))(v31, &v32);
        v12 = v14;
        if ( v14 < 0 )
        {
          v26 = 298;
        }
        else
        {
          v14 = CFormatConverter::CopyPixelsHelper(v6, X, Y, v30[0], v33, v32, v28, v35[0], a3, a4, a5);
          v12 = v14;
          if ( v14 >= 0 )
            goto LABEL_45;
          v26 = 312;
        }
      }
    }
    goto LABEL_43;
  }
  if ( !*((_QWORD *)this + 93) )
  {
    v14 = HrCalcDWordAlignedScanlineStride(
            *((unsigned int *)this + 16),
            *((_DWORD *)this + 4),
            (unsigned int *)this + 188);
    v12 = v14;
    if ( v14 >= 0 )
    {
      v19 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
              WPF::g_pProcessHeap,
              *v18);
      *((_QWORD *)this + 93) = v19;
      if ( !v19 )
      {
        v12 = -2147024882;
        v26 = 326;
        goto LABEL_8;
      }
      goto LABEL_31;
    }
    v26 = 323;
LABEL_43:
    v13 = v14;
    goto LABEL_44;
  }
LABEL_31:
  Height = a2->Height;
  v21 = 0;
  v22 = a2->X == 0;
  Width = a2->Width;
  *(struct WICRect *)v35 = *a2;
  HIDWORD(v35[1]) = 1;
  if ( v22 && !a2->Y && Width == *((_DWORD *)this + 16) )
    v21 = Height == *((_DWORD *)this + 17);
  v24 = Height + Y;
  while ( Y < v24 )
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 **, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 1) + 72LL))(
            *((_QWORD *)this + 1),
            v35,
            *((unsigned int *)this + 188),
            *((unsigned int *)this + 188),
            *((_QWORD *)this + 93));
    v12 = v14;
    if ( v14 < 0 )
    {
      v26 = 377;
      goto LABEL_43;
    }
    CScanPipeline::Run((CFormatConverter *)((char *)this + 80), v5, *((const void **)this + 93), Width, X, Y);
    v5 += a3;
    ++HIDWORD(v35[0]);
    ++Y;
  }
  if ( v21 )
    ReleaseDecoderCopyBuffers(*((struct IUnknown **)this + 1));
LABEL_45:
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v12 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x19Cu);
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v34);
  return (unsigned int)v12;
}
