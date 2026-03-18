/*
 * XREFs of ?MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C0296568
 * Callers:
 *     GreSelectRedirectionBitmap @ 0x1C003A450 (GreSelectRedirectionBitmap.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 */

HBITMAP __fastcall MulGetBitmapForDisplayDevice(HDEV a1, HDEV a2, HBITMAP a3)
{
  HBITMAP v3; // rbx
  HDEV v4; // rdi
  __int64 v5; // rax
  __int64 ***v6; // rcx
  __int64 v7; // r8
  __int64 **v8; // rdx
  int v9; // eax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = a3;
  v4 = a2;
  if ( a1 && ((_DWORD)a1[14] & 0x20000) != 0 && a2 )
  {
    LOBYTE(a2) = 5;
    v5 = HmgShareLockCheck(a3, a2);
    v11 = v5;
    if ( v5 && (*(_DWORD *)(v5 + 116) & 1) != 0 )
    {
      v6 = *(__int64 ****)(v5 + 40);
      v7 = *(_QWORD *)(v5 + 24);
      v8 = *v6;
      v9 = *((_DWORD *)v6 + 4);
      while ( v8[6] != (__int64 *)v4 )
      {
        v8 = (__int64 **)*v8;
        if ( !--v9 )
          goto LABEL_11;
      }
      v3 = *(HBITMAP *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 8LL * *((unsigned int *)v8 + 4)) + 8LL);
    }
LABEL_11:
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v11);
  }
  return v3;
}
