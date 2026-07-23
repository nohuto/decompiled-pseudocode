/*
 * XREFs of PopFxRegisterComponentPerfStates @ 0x14066D1E8
 * Callers:
 *     PoFxRegisterComponentPerfStates @ 0x14066C4D0 (PoFxRegisterComponentPerfStates.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PopPluginRegisterComponentPerfStates @ 0x140204634 (PopPluginRegisterComponentPerfStates.c)
 *     PopPepRegisterComponentPerfStates @ 0x140206A70 (PopPepRegisterComponentPerfStates.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PopFxPepPerfInfoFree @ 0x14066CF60 (PopFxPepPerfInfoFree.c)
 *     PopFxPepPerfInfoQuery @ 0x14066CFD8 (PopFxPepPerfInfoQuery.c)
 *     PopFxTracePerfRegistration @ 0x1406724D4 (PopFxTracePerfRegistration.c)
 */

__int64 __fastcall PopFxRegisterComponentPerfStates(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        char **a6)
{
  char **v6; // r13
  __int64 v7; // r9
  char v8; // bl
  __int64 v9; // rax
  int v10; // eax
  _QWORD *v11; // rdi
  unsigned int v12; // ebx
  unsigned __int64 v14; // r10
  unsigned __int128 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r15
  unsigned __int128 v19; // rax
  unsigned __int64 v20; // kr10_8
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r8
  unsigned int v23; // r11d
  unsigned __int64 v24; // r12
  unsigned int *v25; // r9
  unsigned __int64 v26; // kr20_8
  unsigned int v27; // r9d
  unsigned __int64 v28; // r8
  _WORD *v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  size_t v32; // rbp
  char *PoolWithTag; // rax
  char *v34; // rsi
  UNICODE_STRING **v35; // rcx
  UNICODE_STRING *v36; // r15
  UNICODE_STRING *v37; // rax
  unsigned int i; // edx
  wchar_t *v39; // r12
  unsigned int v40; // ebp
  UNICODE_STRING *v41; // r14
  unsigned int v42; // eax
  unsigned int v43; // ebp
  wchar_t *v44; // r12
  _QWORD *v45; // r14
  char v46; // [rsp+20h] [rbp-98h]
  PVOID P; // [rsp+28h] [rbp-90h] BYREF
  unsigned __int64 v48; // [rsp+30h] [rbp-88h]
  unsigned __int64 v49; // [rsp+38h] [rbp-80h]
  char *v50; // [rsp+40h] [rbp-78h]
  __int64 v51; // [rsp+48h] [rbp-70h]
  __int64 v52; // [rsp+50h] [rbp-68h]
  __int64 v53; // [rsp+58h] [rbp-60h]
  __int64 v54; // [rsp+60h] [rbp-58h]

  v6 = a6;
  v7 = BugCheckParameter3;
  P = 0LL;
  v8 = a3;
  v9 = a2;
  if ( a5 )
  {
    if ( !a6 )
    {
      v11 = a5;
      P = a5;
LABEL_8:
      if ( *(_DWORD *)v11 )
      {
        v46 = PopPluginRegisterComponentPerfStates(v7, *(_DWORD *)(v9 + 16), (__int64)v11);
        if ( v46 || (v8 & 1) != 0 )
        {
          v14 = *(unsigned int *)v11;
          v15 = *(unsigned int *)v11 * (unsigned __int128)0x20uLL;
          v51 = *((_QWORD *)&v15 + 1);
          if ( !is_mul_ok(v14, 0x20uLL) )
            goto LABEL_52;
          v16 = v15 + 160;
          if ( v16 < 0xA0 )
            goto LABEL_52;
          v17 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          v18 = v17 + 8;
          if ( v17 + 8 < v17 )
            goto LABEL_52;
          v20 = (unsigned int)(DWORD2(v15) + 48);
          v19 = v14 * (unsigned __int128)(unsigned int)(DWORD2(v15) + 48);
          v52 = *((_QWORD *)&v19 + 1);
          if ( !is_mul_ok(v14, v20) || (unsigned __int64)v19 + v18 < v18 )
            goto LABEL_52;
          v21 = (unsigned int)(DWORD2(v19) + 16);
          v22 = (v19 + v18 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          v23 = 0;
          v24 = v22;
          if ( (_DWORD)v14 )
          {
            v25 = (unsigned int *)(v11 + 5);
            do
            {
              if ( !*(v25 - 1) )
              {
                v26 = *v25;
                v53 = (*v25 * (unsigned __int128)(unsigned int)(DWORD2(v19) + 16)) >> 64;
                if ( !is_mul_ok(v26, v21) || v22 + v26 * v21 < v22 )
                  goto LABEL_52;
                v22 += v26 * v21;
              }
              ++v23;
              v25 += 12;
            }
            while ( v23 < (unsigned int)v14 );
          }
          v27 = 0;
          v28 = (v22 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
          v48 = v28;
          if ( (_DWORD)v14 )
          {
            v29 = v11 + 1;
            do
            {
              if ( *v29 )
              {
                v30 = (unsigned __int16)*v29 + 2LL;
                if ( v30 + v28 < v28 )
                  goto LABEL_52;
                v28 += v30;
              }
              ++v27;
              v29 += 24;
            }
            while ( v27 < (unsigned int)v14 );
          }
          *(_QWORD *)&v19 = v14 * v21;
          v31 = (v28 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          v49 = v31;
          v54 = (v14 * (unsigned __int128)(unsigned int)(DWORD2(v19) + 16)) >> 64;
          if ( is_mul_ok(v14, v21) && (v32 = v19 + v31, (unsigned __int64)v19 + v31 >= v31) )
          {
            v12 = 0;
            PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v19 + v31, 0x4D584650u);
            v34 = PoolWithTag;
            if ( PoolWithTag )
            {
              memset(PoolWithTag, 0, v32);
              *((_QWORD *)v34 + 4) = a4;
              v35 = (UNICODE_STRING **)(v34 + 160);
              v36 = (UNICODE_STRING *)&v34[v18];
              *((_DWORD *)v34 + 36) = *(_DWORD *)v11;
              *((_QWORD *)v34 + 19) = v34 + 160;
              *(_DWORD *)&v34[v17] = *(_DWORD *)v11;
              v37 = v36;
              v50 = &v34[v17];
              for ( i = 0; i < *(_DWORD *)v11; v35 += 4 )
              {
                *v35 = v37;
                ++i;
                v37 += 3;
              }
              v39 = (wchar_t *)&v34[v24];
              v40 = 0;
              if ( *(_DWORD *)v11 )
              {
                v41 = v36 + 2;
                do
                {
                  *(_QWORD *)&v41[-1].Length = v11[6 * v40 + 3];
                  LODWORD(v41[-1].Buffer) = v11[6 * v40 + 4];
                  HIDWORD(v41[-1].Buffer) = HIDWORD(v11[6 * v40 + 4]);
                  if ( HIDWORD(v11[6 * v40 + 4]) )
                  {
                    *(_QWORD *)&v41->Length = v11[6 * v40 + 5];
                    v41->Buffer = (wchar_t *)v11[6 * v40 + 6];
                  }
                  else
                  {
                    v42 = v11[6 * v40 + 5];
                    *(_DWORD *)&v41->Length = v42;
                    v41->Buffer = v39;
                    memmove(v39, (const void *)v11[6 * v40 + 6], 16LL * v42);
                    v39 += 8 * *(unsigned int *)&v41->Length;
                  }
                  v41 += 3;
                  ++v40;
                }
                while ( v40 < *(_DWORD *)v11 );
              }
              v43 = 0;
              v44 = (wchar_t *)&v34[v48];
              if ( *(_DWORD *)v11 )
              {
                do
                {
                  v45 = &v11[6 * v43];
                  if ( *((_WORD *)v45 + 4) )
                  {
                    v36->Buffer = v44;
                    v36->Length = *((_WORD *)v45 + 4);
                    v36->MaximumLength = *((_WORD *)v45 + 4) + 2;
                    RtlCopyUnicodeString(v36, (PCUNICODE_STRING)(v45 + 1));
                  }
                  v36 += 3;
                  ++v43;
                  v44 += (*((unsigned __int16 *)v45 + 4) >> 1) + 1;
                }
                while ( v43 < *(_DWORD *)v11 );
                v6 = a6;
              }
              *((_QWORD *)v34 + 6) = &v34[v49];
              *(_QWORD *)v34 = a2;
              KeInitializeEvent((PRKEVENT)(v34 + 8), NotificationEvent, 1u);
              if ( (a3 & 6) != 0 )
                v34[74] = 1;
              v34[73] = v46;
              *((_QWORD *)v34 + 14) = v34;
              *((_QWORD *)v34 + 13) = PopFxComponentPerfWork;
              *((_QWORD *)v34 + 11) = 0LL;
              PopFxTracePerfRegistration(v34, 0LL);
              PopPepRegisterComponentPerfStates(*(_QWORD *)(BugCheckParameter3 + 56), *(_DWORD *)(a2 + 16), a3);
              *(_QWORD *)(a2 + 248) = v34;
              if ( v6 )
                *v6 = v50;
            }
            else
            {
              v12 = -1073741670;
            }
          }
          else
          {
LABEL_52:
            v12 = -1073741675;
          }
        }
        else
        {
          v12 = -1073741822;
        }
      }
      else
      {
        v12 = -1073741811;
      }
      if ( a5 )
        return v12;
      goto LABEL_54;
    }
    return 3221225485LL;
  }
  if ( !a6 )
    return 3221225485LL;
  v10 = PopFxPepPerfInfoQuery(BugCheckParameter3, *(unsigned int *)(a2 + 16), &P);
  v11 = P;
  v12 = v10;
  if ( v10 >= 0 )
  {
    v9 = a2;
    v7 = BugCheckParameter3;
    v8 = a3;
    goto LABEL_8;
  }
LABEL_54:
  PopFxPepPerfInfoFree(v11);
  return v12;
}
