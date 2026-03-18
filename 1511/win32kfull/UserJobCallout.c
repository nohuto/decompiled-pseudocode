/*
 * XREFs of UserJobCallout @ 0x1C00CEC90
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00CF948 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C00D05A8 (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 *     ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1C00D05EC (-CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z.c)
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C00D0650 (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z @ 0x1C00D072C (-JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z.c)
 */

__int64 __fastcall UserJobCallout(__int64 a1)
{
  struct _EJOB *v1; // rbp
  unsigned int v2; // ebx
  int v3; // edi
  struct tagPROCESSINFO *v4; // rsi
  struct tagW32JOB *i; // rcx
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v10; // [rsp+40h] [rbp+8h] BYREF
  char v11; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(struct _EJOB **)a1;
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(struct tagPROCESSINFO **)(a1 + 16);
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v10);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
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
  v6 = v3 - 1;
  if ( !v6 )
  {
    if ( i )
    {
      JobCalloutAddProcess(i, v4);
      goto LABEL_8;
    }
    goto LABEL_18;
  }
  if ( v6 == 1 )
  {
    if ( i )
      JobCalloutTerminate(i);
  }
  else
  {
    v2 = -1073741822;
  }
LABEL_8:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  if ( !v10 )
    UserSessionSwitchLeaveCrit(v8, v7);
  return v2;
}
