/*
 * XREFs of NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1400D80C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400D89EC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiBRUSHOBJ_ulGetBrushColor(_DWORD *a1)
{
  struct _GRETHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  _DWORD *v4; // rbx
  int v5; // eax
  __int128 v7; // [rsp+30h] [rbp-98h] BYREF
  __int64 v8; // [rsp+40h] [rbp-88h]
  UMPDOBJ *v9[4]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v10; // [rsp+70h] [rbp-58h]

  CurrentThread = GreGetCurrentThread((__int64)a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v9, CurrentThread);
  if ( v10 )
  {
    v3 = 0;
    v7 = 0LL;
    v8 = 0LL;
    v4 = (_DWORD *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v10, a1);
    if ( v4 )
    {
      GreProbeAndReadFromUntrustedVa(&v7, 0x18uLL, a1, 0x18uLL, 1uLL);
      if ( (v8 & 8) != 0 && (v4[30] & 0x10) != 0 )
        v4[4] |= 8u;
      if ( (v4[30] & 0x10) != 0 )
      {
        v5 = v4[4];
        if ( (v5 & 8) != 0 )
        {
          v4[4] = v5 & 0xFFFFFFF7;
          v3 = *(_DWORD *)((char *)v4 + ((v4[18] & 1) != 0 ? 0x6C : 0) + 24);
        }
        else
        {
          v3 = v4[6];
        }
      }
      else
      {
        v3 = -1;
      }
      a1[4] &= ~8u;
    }
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v9);
    return v3;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v9);
    return 0LL;
  }
}
