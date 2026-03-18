/*
 * XREFs of NtGdiPolyTextOutW @ 0x14032B530
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?GrepPolyTextOutW@@YAHAEAVXDCOBJ@@PEAUtagPOLYTEXTW@@IK@Z @ 0x140333F0C (-GrepPolyTextOutW@@YAHAEAVXDCOBJ@@PEAUtagPOLYTEXTW@@IK@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall NtGdiPolyTextOutW(HDC a1, char *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // edi
  unsigned int v7; // r14d
  char *v8; // r15
  unsigned int i; // edx
  __int64 v10; // rax
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  int v13; // ecx
  unsigned int v14; // eax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  char *v17; // r13
  char *v18; // r11
  unsigned int j; // ebx
  __int64 v20; // r8
  const void *v21; // r10
  unsigned int v22; // r9d
  char *v23; // r14
  unsigned int k; // ebx
  __int64 v25; // rax
  const void *v26; // r8
  char *v27; // r14
  __int64 SessionState; // rax
  char *v30; // [rsp+50h] [rbp-F8h]
  __int64 v31; // [rsp+58h] [rbp-F0h]
  _BYTE v32[64]; // [rsp+60h] [rbp-E8h] BYREF
  _QWORD v33[21]; // [rsp+A0h] [rbp-A8h] BYREF

  v6 = 1;
  v7 = 56 * a3;
  v8 = 0LL;
  if ( a3 > 0xB2924 )
  {
    v6 = 0;
  }
  else
  {
    GreProbeForReadFromUntrustedVa(a2, 56LL * a3, 4uLL);
    for ( i = 0; i < a3; ++i )
    {
      v10 = 56LL * i;
      v11 = *(_DWORD *)&a2[v10 + 8];
      v12 = v7;
      v7 += 2 * v11;
      if ( v11 > 0x1388000 || v7 < v12 )
        goto LABEL_18;
      if ( *(_QWORD *)&a2[v10 + 48] )
      {
        v13 = 4 * v11;
        if ( (*(_DWORD *)&a2[v10 + 24] & 0x2000) != 0 )
        {
          if ( 2 * v11 > 0x9C4000 )
            v6 = 0;
          v13 = 8 * v11;
        }
        else if ( v11 > 0x9C4000 )
        {
          v6 = 0;
        }
        v14 = v7;
        v7 += v13;
        if ( !v6 || v7 < v14 )
          goto LABEL_18;
      }
      if ( v11 && !*(_QWORD *)&a2[56 * i + 16] )
      {
LABEL_18:
        v6 = 0;
        break;
      }
    }
  }
  if ( v6 && v7 )
  {
    if ( v7 <= 0x2710000 )
      v8 = (char *)AllocFreeTmpBuffer(v7);
    if ( v8 )
    {
      memmove(v8, a2, 56LL * a3);
      v17 = &v8[56 * a3];
      v18 = &v8[v7];
      v30 = v18;
      for ( j = 0; j < a3; ++j )
      {
        v20 = 56LL * j;
        v15 = *(unsigned int *)&v8[v20 + 8];
        if ( (_DWORD)v15 )
        {
          v21 = *(const void **)&v8[v20 + 48];
          if ( v21 )
          {
            v15 = (unsigned int)(4 * v15);
            v16 = 56LL * j;
            v22 = *(_DWORD *)&v8[v16 + 8];
            if ( (*(_DWORD *)&v8[v20 + 24] & 0x2000) != 0 )
            {
              if ( v22 > 0x4E2000 )
                v6 = 0;
              v15 = (unsigned int)(2 * v15);
            }
            else if ( v22 > 0x9C4000 )
            {
              v6 = 0;
            }
            v23 = &v17[v15];
            if ( !v6 || v23 < v17 || v23 > v18 )
            {
LABEL_50:
              v6 = 0;
              goto LABEL_51;
            }
            GreProbeAndReadFromUntrustedVa(v17, v15, v21, v15, 4uLL);
            v16 = 56LL * j;
            *(_QWORD *)&v8[v16 + 48] = v17;
            v17 = v23;
            v18 = v30;
          }
        }
      }
      for ( k = 0; k < a3; ++k )
      {
        v25 = 56LL * k;
        v31 = v25;
        LODWORD(v16) = *(_DWORD *)&v8[v25 + 8];
        if ( (_DWORD)v16 )
        {
          v26 = *(const void **)&v8[v25 + 16];
          if ( !v26 )
            goto LABEL_50;
          v15 = (unsigned int)(2 * v16);
          v27 = &v17[v15];
          if ( (unsigned int)v16 > 0x1388000 || v27 < v17 || v27 > v18 )
            goto LABEL_50;
          GreProbeAndReadFromUntrustedVa(v17, v15, v26, (unsigned int)v15, 2uLL);
          *(_QWORD *)&v8[v31 + 16] = v17;
          v17 = v27;
          v18 = v30;
        }
      }
LABEL_51:
      if ( v6 )
      {
        SessionState = W32GetSessionState(v16, v15);
        EUDCCountRegion::EUDCCountRegion(
          (EUDCCountRegion *)v32,
          (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
        if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v32) )
        {
          APIDCOBJ::APIDCOBJ((APIDCOBJ *)v33, a1);
          if ( v33[0] )
          {
            v6 = GrepPolyTextOutW((struct XDCOBJ *)v33, (struct tagPOLYTEXTW *)v8, a3, a4);
          }
          else
          {
            EngSetLastError(6u);
            v6 = 0;
          }
          APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v33);
        }
        else
        {
          EngSetLastError(0x15u);
          v6 = 0;
        }
        EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v32);
      }
      FreeTmpBuffer(v8);
    }
    else
    {
      return 0;
    }
  }
  return v6;
}
