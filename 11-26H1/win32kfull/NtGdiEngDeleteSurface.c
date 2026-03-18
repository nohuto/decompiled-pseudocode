/*
 * XREFs of NtGdiEngDeleteSurface @ 0x14032CFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1400182D8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 */

__int64 __fastcall NtGdiEngDeleteSurface(HSURF a1)
{
  struct _GRETHREAD *CurrentThread; // rax
  unsigned int v3; // ebx
  void *v4; // rcx
  int v5; // edi
  _BYTE v7[32]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v8; // [rsp+40h] [rbp-78h]
  UMPDOBJ *v9[12]; // [rsp+50h] [rbp-68h] BYREF

  CurrentThread = GreGetCurrentThread((__int64)a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v9, CurrentThread);
  SURFREF::SURFREF((SURFREF *)v7, a1);
  v3 = 1;
  if ( v8 && (*(_DWORD *)(v8 + 112) & 0x40000) != 0 )
  {
    v4 = *(void **)(v8 + 144);
    if ( v4 )
    {
      GrepUnsecureVirtualMemory(v4);
      *(_QWORD *)(v8 + 144) = 0LL;
    }
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v7);
  if ( !v5 || !EngDeleteSurface(a1) )
    v3 = 0;
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v9);
  return v3;
}
