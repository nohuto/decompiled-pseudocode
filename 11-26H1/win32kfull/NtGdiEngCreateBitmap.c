/*
 * XREFs of NtGdiEngCreateBitmap @ 0x140230890
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1400182D8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 */

HBITMAP __fastcall NtGdiEngCreateBitmap(SIZEL sizl, unsigned int a2, int a3, unsigned int a4, PVOID pvBits)
{
  __int64 v7; // rsi
  struct _GRETHREAD *CurrentThread; // rax
  HBITMAP Bitmap; // r14
  void *v11; // rdi
  BOOL v12; // r15d
  int v13; // eax
  unsigned __int64 v14; // rcx
  unsigned int v15; // esi
  FLONG v16; // esi
  unsigned int v18; // edi
  _BYTE v19[32]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+68h] [rbp-A0h]
  UMPDOBJ *v21[19]; // [rsp+70h] [rbp-98h] BYREF
  LONG cy; // [rsp+114h] [rbp+Ch]

  cy = sizl.cy;
  v7 = a2;
  CurrentThread = GreGetCurrentThread(*(_QWORD *)&sizl);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v21, CurrentThread);
  Bitmap = 0LL;
  v11 = 0LL;
  v12 = 1;
  if ( sizl.cx <= 0 || cy <= 0 )
  {
    v13 = 0;
  }
  else
  {
    if ( (unsigned __int64)(cy * (__int64)sizl.cx) > 0xFFFFFFFF )
    {
LABEL_22:
      UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v21);
      return 0LL;
    }
    v13 = 1;
  }
  if ( !v13 )
    goto LABEL_22;
  v14 = v7 * (unsigned int)cy;
  if ( v14 > 0xFFFFFFFF )
    goto LABEL_22;
  v15 = a4 & 0xFFFFFF7F;
  if ( (a4 & 0x80u) == 0 )
    v15 = a4;
  if ( pvBits )
  {
    v16 = v15 & 0xFFFFFFF7;
    v18 = v14;
    GreProbeForReadFromUntrustedVa(pvBits, (unsigned int)v14, 1uLL);
    v11 = GrepSecureVirtualMemory(pvBits, v18, 4u);
    v12 = v11 != 0LL;
  }
  else
  {
    if ( a3 != 1 && a3 != 2 && a3 != 3 && a3 != 4 && (unsigned int)(a3 - 5) >= 2 )
      v12 = 0;
    v16 = v15 | 8;
    if ( *((_QWORD *)GreGetCurrentThread(v14) + 8) )
      v16 |= 0x80u;
  }
  if ( v12 )
    Bitmap = EngCreateBitmap(sizl, a2, a3 | 0x8000u, v16, pvBits);
  if ( v11 )
  {
    if ( Bitmap )
    {
      SURFREF::SURFREF((SURFREF *)v19, (HSURF)Bitmap);
      if ( v20 )
      {
        *(_QWORD *)(v20 + 144) = v11;
      }
      else
      {
        GrepUnsecureVirtualMemory(v11);
        EngDeleteSurface((HSURF)Bitmap);
        Bitmap = 0LL;
      }
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v19);
    }
    else
    {
      GrepUnsecureVirtualMemory(v11);
    }
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v21);
  return Bitmap;
}
