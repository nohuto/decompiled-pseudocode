/*
 * XREFs of ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C011B8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C011B760 (-UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C011C1B8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C011C208 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C011C278 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C011C2D0 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C011C3C8 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z @ 0x1C011C840 (-ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C011C86C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C025D1A8 (-SETFLAG@@YAXHAECKK@Z.c)
 */

struct DHPDEV__ *__fastcall UMPDDrvEnablePDEV(
        struct _devicemodeW *a1,
        struct DHPDEV__ *a2,
        unsigned int a3,
        HSURF *a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7,
        struct tagDEVINFO *a8,
        HDEV a9,
        unsigned __int16 *a10,
        void *a11)
{
  __int64 v12; // r13
  UMPDOBJ *v14; // rbx
  struct DHPDEV__ *v15; // rsi
  unsigned int v16; // edi
  char *v17; // rax
  const void *KernelPtr; // rax
  const void *v19; // rax
  char *v20; // r13
  PVOID v21; // r12
  PVOID v22; // r15
  PVOID v23; // rdi
  size_t v24; // rax
  size_t v25; // rax
  void *v26; // rdx
  size_t v27; // rax
  void *v28; // rdx
  void *v29; // rdi
  _QWORD *v30; // rax
  size_t v32; // [rsp+20h] [rbp-168h]
  UMPDOBJ *v33; // [rsp+40h] [rbp-148h] BYREF
  void *Src; // [rsp+48h] [rbp-140h]
  struct DHPDEV__ *v35; // [rsp+50h] [rbp-138h] BYREF
  PVOID v36; // [rsp+58h] [rbp-130h]
  PVOID v37; // [rsp+60h] [rbp-128h]
  void *v38; // [rsp+68h] [rbp-120h]
  PVOID pv; // [rsp+70h] [rbp-118h]
  void *v40; // [rsp+78h] [rbp-110h]
  unsigned int *v41; // [rsp+80h] [rbp-108h]
  void *v42; // [rsp+88h] [rbp-100h]
  _QWORD v43[22]; // [rsp+90h] [rbp-F8h] BYREF

  v12 = a3;
  v35 = a2;
  v41 = a6;
  v38 = a8;
  Src = a9;
  v36 = a10;
  v37 = a11;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v33);
  memset(v43, 0, sizeof(v43));
  v14 = v33;
  v15 = 0LL;
  if ( v33 )
  {
    v43[0] = 176LL;
    v43[2] = *(_QWORD *)v33;
    v43[3] = *((_QWORD *)Src + 228);
    v43[4] = a1;
    v43[5] = v35;
    LODWORD(v43[6]) = v12;
    v43[7] = a4;
    LODWORD(v43[8]) = a5;
    LODWORD(v43[10]) = a7;
    v43[12] = Src;
    v43[13] = v36;
    v43[14] = v37;
    LODWORD(v43[15]) = *((_DWORD *)v33 + 109);
    if ( LODWORD(v43[15]) )
      HIDWORD(v43[15]) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    else
      v43[15] = 0LL;
    v16 = a1 ? a1->dmSize + a1->dmDriverExtra : 0;
    if ( (!a4 || (unsigned int)v12 > 0x1FFFFFFF || (v43[7] = UMPDOBJ::_AllocUserMem(v14, 8 * (int)v12, 1)) != 0LL)
      && (!a6 || (v43[9] = UMPDOBJ::_AllocUserMem(v14, a5, 1)) != 0LL)
      && (!v38 || (v43[11] = UMPDOBJ::_AllocUserMem(v14, a7, 1)) != 0LL) )
    {
      v17 = (char *)UMPDOBJ::_AllocUserMem(v14, 0x30000u, 1);
      if ( v17 )
      {
        v43[17] = v17;
        v43[18] = v17 + 0x10000;
        v43[19] = v17 + 0x20000;
        if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (void **)&v43[4], v16) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkStringW(v14, (unsigned __int16 **)&v43[5]) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkStringW(v14, (unsigned __int16 **)&v43[13]) )
            {
              LODWORD(v32) = 8;
              if ( UMPDOBJ::Thunk(v14, v43, 0xB0u, &v35, v32) != -1 )
              {
                if ( a4 )
                {
                  KernelPtr = UMPDOBJ::GetKernelPtr(v14, (void *)v43[7]);
                  memmove(a4, KernelPtr, 8 * v12);
                }
                if ( a6 )
                {
                  v19 = UMPDOBJ::GetKernelPtr(v14, (void *)v43[9]);
                  memmove(a6, v19, a5);
                  if ( a6[59] == 18 && a6[68] <= 0x100 && a6[69] <= 0x100 )
                  {
                    v42 = Src;
                    SETFLAG(1, (volatile unsigned int *)Src + 14, 0x400000u);
                    LODWORD(v43[20]) = *((_QWORD *)a6 + 35) != 0LL;
                    HIDWORD(v43[20]) = *((_QWORD *)a6 + 36) != 0LL;
                    LODWORD(v43[21]) = *((_QWORD *)a6 + 37) != 0LL;
                    *((_QWORD *)a6 + 35) = 0LL;
                    *((_QWORD *)a6 + 36) = 0LL;
                    *((_QWORD *)a6 + 37) = 0LL;
                    v20 = (char *)UMPDOBJ::GetKernelPtr(v14, (void *)v43[17]);
                    Src = UMPDOBJ::GetKernelPtr(v14, (void *)v43[18]);
                    v40 = UMPDOBJ::GetKernelPtr(v14, (void *)v43[19]);
                    v21 = 0LL;
                    pv = 0LL;
                    v22 = 0LL;
                    v37 = 0LL;
                    v23 = 0LL;
                    v36 = 0LL;
                    if ( LODWORD(v43[20]) )
                    {
                      v21 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
                      pv = v21;
                    }
                    if ( HIDWORD(v43[20]) )
                    {
                      v22 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
                      v37 = v22;
                    }
                    if ( LODWORD(v43[21]) )
                    {
                      v23 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
                      v36 = v23;
                    }
                    if ( v21 )
                    {
                      if ( *((_DWORD *)v14 + 109) )
                      {
                        memmove(v21, v20, a6[68] * a6[69]);
                        if ( v22 )
                          memmove(v22, Src, a6[68] * a6[69]);
                        if ( v23 )
                          memmove(v23, v40, a6[68] * a6[69]);
                      }
                      else
                      {
                        v24 = a6[68] * a6[69];
                        if ( &v20[v24] < v20 || (unsigned __int64)&v20[v24] > W32UserProbeAddress )
                          *W32UserProbeAddress = 0;
                        memmove(v21, v20, v24);
                        if ( v22 )
                        {
                          v25 = a6[68] * a6[69];
                          v26 = Src;
                          if ( (char *)Src + v25 < Src || (unsigned __int64)Src + v25 > W32UserProbeAddress )
                            *W32UserProbeAddress = 0;
                          memmove(v22, v26, v25);
                        }
                        if ( v23 )
                        {
                          v27 = a6[68] * a6[69];
                          v28 = v40;
                          if ( (char *)v40 + v27 < v40 || (unsigned __int64)v40 + v27 > W32UserProbeAddress )
                            *W32UserProbeAddress = 0;
                          memmove(v23, v28, v27);
                        }
                      }
                      *((_QWORD *)a6 + 35) = v21;
                      *((_QWORD *)a6 + 36) = v22;
                      *((_QWORD *)a6 + 37) = v23;
                    }
                    else
                    {
                      a6[59] = 17;
                    }
                  }
                }
                v29 = v38;
                if ( v38 )
                {
                  v30 = UMPDOBJ::GetKernelPtr(v14, (void *)v43[11]);
                  if ( !v30[37] )
                  {
                    if ( v35 )
                      UMPDDrvDisablePDEV(v35);
                    goto LABEL_59;
                  }
                  memmove(v29, v30, a7);
                }
                v15 = v35;
LABEL_59:
                XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v33);
                return v15;
              }
            }
          }
        }
      }
    }
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v33);
  return 0LL;
}
