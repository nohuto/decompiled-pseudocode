/*
 * XREFs of ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02B0130
 * Callers:
 *     NtGdiCheckBitmapBits @ 0x1C02B0A60 (NtGdiCheckBitmapBits.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0019204 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C025AC30 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreCheckBitmapBits(HDC a1, void *a2, struct _DEVBITMAPINFO *a3, void *a4, unsigned __int8 *a5)
{
  unsigned int v8; // edi
  __int64 v9; // rbx
  __int64 v11; // [rsp+68h] [rbp-A0h] BYREF
  char v12; // [rsp+70h] [rbp-98h]
  int v13; // [rsp+74h] [rbp-94h]
  _QWORD v14[6]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v15[32]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v16; // [rsp+C8h] [rbp-40h]
  _BYTE v17[32]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v18[80]; // [rsp+F8h] [rbp-10h] BYREF

  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  if ( v14[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v17);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v17, (struct XDCOBJ *)v14, 0) )
    {
      v9 = *(_QWORD *)(v14[0] + 48LL);
      if ( v9 )
      {
        if ( *(_QWORD *)(v9 + 3248) )
        {
          COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v15, a2);
          if ( v16 )
          {
            v11 = 0LL;
            v12 = 0;
            v13 = 0;
            SURFMEM::bCreateDIB((SURFMEM *)&v11, a3, a4, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            if ( v11 )
              v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, unsigned __int8 *))(v9 + 3248))(
                     *(_QWORD *)(v9 + 1824),
                     *(_QWORD *)(v16 + 24),
                     v11 + 24,
                     a5);
            SURFMEM::~SURFMEM((SURFMEM *)&v11);
          }
          SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v15);
        }
        else
        {
          EngSetLastError(0x57u);
        }
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v17);
    DCOBJ::~DCOBJ((DCOBJ *)v18);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v14);
  return v8;
}
