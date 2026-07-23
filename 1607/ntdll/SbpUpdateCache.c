/*
 * XREFs of SbpUpdateCache @ 0x18002C528
 * Callers:
 *     SbSelectProcedure @ 0x18002E9B0 (SbSelectProcedure.c)
 * Callees:
 *     SbpFindMatchingContext @ 0x18002C694 (SbpFindMatchingContext.c)
 *     SbAtomicCaptureContextGuid @ 0x18002C6D0 (SbAtomicCaptureContextGuid.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     SbpResolveBasedOnName @ 0x1800FEBF4 (SbpResolveBasedOnName.c)
 */

__int64 __fastcall SbpUpdateCache(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rdi
  _DWORD *v8; // rax
  __int64 i; // rbp
  __int64 v10; // rbx
  unsigned int v11; // esi
  unsigned int v12; // ecx
  unsigned int v13; // r10d
  unsigned int v14; // esi
  unsigned int v15; // r10d
  unsigned __int64 v16; // rdi
  unsigned int v17; // edx
  __int64 result; // rax
  unsigned int v19; // eax
  _DWORD *v20; // rcx
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // rdi
  __int64 v27; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v28[16]; // [rsp+30h] [rbp-58h] BYREF

  v4 = a3;
  if ( !(unsigned int)SbAtomicCaptureContextGuid(a4, v28, &v27) )
    return 0LL;
  v8 = *(_DWORD **)(a2 + 24);
  for ( i = 0LL; (unsigned int)i < *v8; v4 = a3 )
  {
    v10 = *(_QWORD *)&v8[2 * i + 2];
    if ( v10 )
    {
      v11 = 0;
      if ( *(_DWORD *)(v10 + 68) )
      {
        while ( 1 )
        {
          v12 = 0;
          if ( *(_DWORD *)(v4 + 60) )
            break;
LABEL_6:
          if ( ++v11 >= *(_DWORD *)(v10 + 68) )
            goto LABEL_7;
        }
        v22 = (unsigned __int64)v11 << 7;
        while ( 1 )
        {
          v23 = 16 * (v12 + 4LL);
          v24 = *(_QWORD *)(v22 + v10 + 184) - *(_QWORD *)(v23 + v4);
          if ( !v24 )
            v24 = *(_QWORD *)(v22 + v10 + 192) - *(_QWORD *)(v23 + v4 + 8);
          if ( !v24 )
            break;
          if ( ++v12 >= *(_DWORD *)(v4 + 60) )
            goto LABEL_6;
        }
        v25 = (unsigned __int64)v11 << 7;
        if ( !*(_QWORD *)(v25 + v10 + 80) && *(_DWORD *)(v25 + v10 + 88) == 2 )
          *(_QWORD *)(v25 + v10 + 80) = SbpResolveBasedOnName(*(_QWORD *)(v25 + v10 + 72));
        *(_QWORD *)(a1 + 8 * i + 16) = v25 + v10 + 72;
      }
LABEL_7:
      v13 = *(_DWORD *)(v10 + 68);
      if ( v11 >= v13 )
      {
        v14 = 0;
        if ( v13 )
        {
          while ( (unsigned int)SbpFindMatchingContext(v28, v10 + ((unsigned __int64)v14 << 7) + 72) != 1 )
          {
            if ( ++v14 >= v15 )
              goto LABEL_14;
          }
          v16 = (unsigned __int64)v14 << 7;
          if ( !*(_QWORD *)(v16 + v10 + 80) && *(_DWORD *)(v16 + v10 + 88) == 2 )
            *(_QWORD *)(v16 + v10 + 80) = SbpResolveBasedOnName(*(_QWORD *)(v16 + v10 + 72));
          *(_QWORD *)(a1 + 8 * i + 16) = v16 + v10 + 72;
        }
LABEL_14:
        v17 = *(_DWORD *)(v10 + 68);
        if ( v14 >= v17 )
        {
          v19 = 0;
          if ( v17 )
          {
            v20 = (_DWORD *)(v10 + 104);
            while ( !*v20 )
            {
              ++v19;
              v20 += 32;
              if ( v19 >= v17 )
                goto LABEL_15;
            }
            v21 = (unsigned __int64)v19 << 7;
            if ( !*(_QWORD *)(v21 + v10 + 80) && *(_DWORD *)(v21 + v10 + 88) == 2 )
              *(_QWORD *)(v21 + v10 + 80) = SbpResolveBasedOnName(*(_QWORD *)(v21 + v10 + 72));
            *(_QWORD *)(a1 + 8 * i + 16) = v21 + v10 + 72;
          }
        }
      }
    }
LABEL_15:
    v8 = *(_DWORD **)(a2 + 24);
    i = (unsigned int)(i + 1);
  }
  result = 1LL;
  *(_QWORD *)a1 = v27;
  *(_DWORD *)(a1 + 8) = a4;
  return result;
}
