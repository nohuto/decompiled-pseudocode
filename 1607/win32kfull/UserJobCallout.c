/*
 * XREFs of UserJobCallout @ 0x1C00995A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C0096788 (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1C0096864 (-CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z.c)
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C00968C8 (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 *     ?JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z @ 0x1C00972D8 (-JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C009A5A8 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall UserJobCallout(__int64 a1)
{
  struct _EJOB *v1; // rbp
  unsigned int v2; // ebx
  int v3; // edi
  struct tagPROCESSINFO *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  struct tagW32JOB *i; // rcx
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v12; // [rsp+40h] [rbp+8h] BYREF
  char v13; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(struct _EJOB **)a1;
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(struct tagPROCESSINFO **)(a1 + 16);
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v12);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
  for ( i = (struct tagW32JOB *)gpJobsList; i && *((struct _EJOB **)i + 1) != v1; i = *(struct tagW32JOB **)i )
    ;
  if ( !v3 )
  {
    if ( i )
    {
      if ( (_DWORD)v4 == *((_DWORD *)i + 6) )
        goto LABEL_8;
    }
    else
    {
      i = CreateW32Job(v1);
      if ( !i )
      {
LABEL_18:
        v2 = -1073741823;
        goto LABEL_8;
      }
    }
    *((_DWORD *)i + 6) = (_DWORD)v4;
    UpdateJob(i);
    goto LABEL_8;
  }
  v8 = v3 - 1;
  if ( !v8 )
  {
    if ( i )
    {
      JobCalloutAddProcess(i, v4);
      goto LABEL_8;
    }
    goto LABEL_18;
  }
  if ( v8 == 1 )
  {
    if ( i )
      JobCalloutTerminate(i, v5, v6);
  }
  else
  {
    v2 = -1073741822;
  }
LABEL_8:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
  if ( !v12 )
    UserSessionSwitchLeaveCrit(v10, v9);
  return v2;
}
