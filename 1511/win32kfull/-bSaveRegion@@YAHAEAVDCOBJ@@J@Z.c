/*
 * XREFs of ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00DB300
 * Callers:
 *     GreSaveDC @ 0x1C00CC540 (GreSaveDC.c)
 * Callees:
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002DAD0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall bSaveRegion(struct DCOBJ *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  __int64 v5; // rcx
  __int64 v6; // rax
  bool v7; // zf
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rax
  DYNAMICMODECHANGESHARELOCK *v12; // rcx
  _BYTE v13[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+28h] [rbp-38h] BYREF
  int v15; // [rsp+30h] [rbp-30h]
  int v16; // [rsp+34h] [rbp-2Ch]
  __int64 v17; // [rsp+38h] [rbp-28h] BYREF
  int v18; // [rsp+40h] [rbp-20h]
  struct _RECTL v19; // [rsp+48h] [rbp-18h] BYREF

  v2 = *(_QWORD *)a1;
  v3 = 1;
  if ( (_DWORD)a2 != 1 )
  {
    v5 = *(_QWORD *)(v2 + 128);
    v15 = 0;
    LOBYTE(a2) = 1;
    v16 = 0;
    v6 = HmgLockEx(v5, a2, 0LL);
    v14 = v6;
    if ( !v6 )
      goto LABEL_13;
    v7 = (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v14) == 0;
    v6 = v14;
    if ( v7 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v14 + 12));
      v6 = 0LL;
      v14 = 0LL;
    }
    if ( v6 )
    {
      v8 = *(_QWORD *)(v6 + 232);
      if ( v8 )
        ++*(_DWORD *)(v8 + 32);
      v9 = *(_QWORD *)(v6 + 224);
      if ( v9 )
        ++*(_DWORD *)(v9 + 32);
    }
    else
    {
LABEL_13:
      v3 = 0;
    }
    if ( v6 )
    {
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v14);
      _InterlockedDecrement((volatile signed __int32 *)(v14 + 12));
    }
    return v3;
  }
  v11 = *(_QWORD *)(v2 + 528);
  v19.left = 0;
  v19.bottom = 0;
  v19.top = HIDWORD(v11);
  v19.right = v11;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v17);
  if ( v17 )
  {
    if ( *(_QWORD *)(*(_QWORD *)a1 + 512LL) )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v13);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v12);
    }
    RGNOBJ::vSet((RGNOBJ *)&v17, &v19);
    *(_QWORD *)(*(_QWORD *)a1 + 1512LL) = v17;
    if ( v18 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v17);
    return v3;
  }
  if ( v18 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v17);
  return 0LL;
}
