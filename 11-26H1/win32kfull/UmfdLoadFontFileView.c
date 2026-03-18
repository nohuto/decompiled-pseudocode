/*
 * XREFs of UmfdLoadFontFileView @ 0x140326DD0
 * Callers:
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAUHDEV__@@PEAUFNTCHECKSUM@@HPEAH@Z @ 0x140327830 (-vLoadFontFileView@@YAXPEAGKPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAUH.c)
 * Callees:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400C56B0 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAUFONTFILEVIEW@@I@Z @ 0x1400D0168 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAUFONTFILEVIEW@@I@Z.c)
 *     EngFntCacheFault @ 0x1402960A0 (EngFntCacheFault.c)
 *     ?FNTCacheValidateFntFileInfo@@YA?AW4FntFileInfoValidationResult@@PEAPEAUFONTFILEVIEW@@K@Z @ 0x14031B0D8 (-FNTCacheValidateFntFileInfo@@YA-AW4FntFileInfoValidationResult@@PEAPEAUFONTFILEVIEW@@K@Z.c)
 *     ?PutFntCacheDrvAndFileInfo@@YAXKPEAUHDEV__@@KPEAPEAUFONTFILEVIEW@@K@Z @ 0x14031B4AC (-PutFntCacheDrvAndFileInfo@@YAXKPEAUHDEV__@@KPEAPEAUFONTFILEVIEW@@K@Z.c)
 *     _UmfdLoadFontFileView_::_2_::_lambda_1_::operator() @ 0x140326A10 (_UmfdLoadFontFileView_--_2_--_lambda_1_--operator().c)
 */

char __fastcall UmfdLoadFontFileView(
        __int64 a1,
        __int64 a2,
        struct FONTFILEVIEW **a3,
        unsigned int a4,
        char a5,
        char a6,
        char a7,
        int a8,
        __int64 *a9,
        HDEV *a10,
        ULONG *a11,
        _DWORD *a12,
        __int64 a13)
{
  char result; // al
  __int64 v15; // rdx
  __int16 v16; // bx
  HDEV v17; // r15
  int v18; // r13d
  int v19; // esi
  int v20; // ecx
  __int64 SessionState; // rax
  unsigned int *v22; // r14
  char v23; // di
  HDEV v24; // rax
  unsigned int v25; // eax
  unsigned int i; // edx
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // ecx
  __int64 v30; // rax
  char v31; // r15
  unsigned int v32; // esi
  int v33; // r14d
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rsi
  unsigned int j; // r14d
  struct FONTFILEVIEW *v38; // rcx
  __int64 v39; // r13
  const wchar_t *v40; // rcx
  size_t v41; // rax
  int v42; // eax
  __int64 v43; // rax
  int v44; // edx
  int v45; // edx
  int v46; // edx
  HDEV v47; // [rsp+30h] [rbp-50h] BYREF
  wchar_t *Str1; // [rsp+38h] [rbp-48h]
  _QWORD v49[8]; // [rsp+40h] [rbp-40h] BYREF
  int v50; // [rsp+C8h] [rbp+48h]
  struct FONTFILEVIEW **v51; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v52; // [rsp+D8h] [rbp+58h] BYREF

  v52 = a4;
  v51 = a3;
  result = UmfdHostLifeTimeManager::EnsureUmfdHost(a1, a2, (__int64)a3);
  v16 = 0;
  *a9 = 0LL;
  *a10 = 0LL;
  if ( result )
  {
    v17 = *(HDEV *)a13;
    v18 = *(_DWORD *)(a13 + 16);
    v19 = *(_DWORD *)(a13 + 20);
    v50 = *(_DWORD *)(a13 + 8);
    v20 = *(_DWORD *)(a13 + 12);
    result = (char)a12;
    if ( a12 )
      *a12 = v18;
    if ( !v20 )
    {
      SessionState = W32GetSessionState(0, v15);
      v22 = a11;
      v23 = 1;
      v24 = *(HDEV *)(*(_QWORD *)(SessionState + 96) + 24136LL);
      v47 = v24;
      if ( v19 && v17 != v24 )
      {
        v19 = 0;
        EngFntCacheFault(*a11, 1u);
        *v22 = 0;
      }
      v25 = v52;
      for ( i = 0; i < v52; v25 = v52 )
      {
        v27 = i++;
        *((_DWORD *)v51[v27] + 16) = 0;
      }
      UmfdInsertFontFileViewForLookup(v51, v25);
      v49[0] = &v47;
      v49[1] = &a7;
      v30 = *(_QWORD *)(W32GetSessionState(v29, v28) + 96);
      v49[2] = &v52;
      v49[6] = v30 + 4864;
      v49[3] = &v51;
      v49[4] = &a5;
      v49[5] = &a6;
      if ( v19 )
      {
        if ( v50 == 1 || (v31 = 1, !a1) )
          v31 = 0;
        v32 = *v22;
        v33 = 0;
        if ( v18 && v31 )
        {
          v34 = FNTCacheValidateFntFileInfo((__int64)v51, v52);
          v33 = v34;
          if ( v34 == 1 )
          {
            v32 = 0;
          }
          else if ( v34 == 2 )
          {
            goto LABEL_36;
          }
        }
        v36 = UmfdLoadFontFileView_::_2_::_lambda_1_::operator()((__int64)v49, v31, v32);
        if ( v36 )
        {
          for ( j = 0; j < v52; ++j )
          {
            *((_BYTE *)v51[j] + 44) = 1;
            if ( !v31 )
            {
              v38 = v51[j];
              Str1 = (wchar_t *)*((_QWORD *)v38 + 10);
              v39 = *(_QWORD *)(W32GetSessionState((_DWORD)v38, v35) + 96);
              v40 = *(const wchar_t **)(v39 + 20088);
              if ( !v40
                || (v41 = wcsnlen(v40, 0x104uLL),
                    v42 = wcsncmp(Str1, *(const wchar_t **)(v39 + 20088), v41),
                    LOBYTE(v35) = 1,
                    v42) )
              {
                LOBYTE(v35) = 0;
              }
              *((_BYTE *)v51[j] + 45) = v35;
            }
          }
        }
        else
        {
          if ( v50 != 1 || !a1 )
            v23 = 0;
          if ( v18 )
          {
            if ( v23 )
              v33 = FNTCacheValidateFntFileInfo((__int64)v51, v52);
          }
          if ( v33 == 2 )
            goto LABEL_36;
          v36 = UmfdLoadFontFileView_::_2_::_lambda_1_::operator()((__int64)v49, v23, 0);
        }
        if ( !v36 )
        {
LABEL_36:
          result = (char)a10;
          *a10 = 0LL;
          return result;
        }
      }
      else
      {
        v43 = UmfdLoadFontFileView_::_2_::_lambda_1_::operator()((__int64)v49, a1 != 0, *v22);
        v36 = v43;
        if ( !v43 )
          goto LABEL_36;
        v44 = *(_DWORD *)(v43 + 20);
        if ( v44 )
        {
          v45 = v44 - 1;
          if ( v45 )
          {
            v46 = v45 - 1;
            if ( v46 )
            {
              if ( v46 == 1 )
                v16 = 4;
            }
            else
            {
              v16 = 3;
            }
          }
          else
          {
            v16 = 2;
          }
        }
        else
        {
          v16 = 1;
        }
        PutFntCacheDrvAndFileInfo(*v22, v47, v16, v51, v52);
      }
      *a10 = v47;
      result = (char)a9;
      *a9 = v36;
    }
  }
  return result;
}
