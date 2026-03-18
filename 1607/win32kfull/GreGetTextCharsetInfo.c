/*
 * XREFs of GreGetTextCharsetInfo @ 0x1C0023ACC
 * Callers:
 *     NtGdiGetTextCharsetInfo @ 0x1C0023A40 (NtGdiGetTextCharsetInfo.c)
 *     DT_InitDrawTextInfo @ 0x1C024742C (DT_InitDrawTextInfo.c)
 * Callees:
 *     GreGetCharSet @ 0x1C0023BD8 (GreGetCharSet.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreGetTextCharsetInfo(HDC a1, __int64 a2)
{
  unsigned int v4; // edi
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v12[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  v4 = (unsigned int)GreGetCharSet(a1) >> 16;
  if ( a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v11, a1);
    if ( !v11[0] )
    {
      EngSetLastError(6u);
      v4 = 1;
      goto LABEL_15;
    }
    v5 = RFONTOBJ::bInit((RFONTOBJ *)&v13, (struct XDCOBJ *)v11, 0, 2u);
    v6 = v13;
    if ( v5 )
      GreAcquireSemaphore(*(_QWORD *)(v13 + 528));
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 112);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 32);
        if ( *(_DWORD *)(v8 + 4) > 4u && (v9 = *(int *)(v8 + 196), (_DWORD)v9) )
        {
          *(_OWORD *)a2 = *(_OWORD *)(v9 + v8);
          *(_QWORD *)(a2 + 16) = *(_QWORD *)(v9 + v8 + 16);
        }
        else
        {
          *(_QWORD *)a2 = 0LL;
          *(_QWORD *)(a2 + 8) = 0LL;
          *(_DWORD *)(a2 + 16) = 0;
          *(_DWORD *)(a2 + 20) = 0;
        }
        goto LABEL_13;
      }
      EngSetLastError(6u);
    }
    v4 = 1;
LABEL_13:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
LABEL_15:
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v11);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v12);
  }
  return v4;
}
