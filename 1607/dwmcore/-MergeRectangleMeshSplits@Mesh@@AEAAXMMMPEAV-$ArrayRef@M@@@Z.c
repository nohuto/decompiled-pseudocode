/*
 * XREFs of ?MergeRectangleMeshSplits@Mesh@@AEAAXMMMPEAV?$ArrayRef@M@@@Z @ 0x180092000
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800921B0 (-CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Mesh::MergeRectangleMeshSplits(__int64 a1, float a2, float a3, float a4, __int64 a5)
{
  float *v6; // rdx
  int v7; // ebx
  int v8; // r10d
  int v9; // r8d
  int v10; // edi
  __int64 v11; // r11
  __int64 v12; // rax
  float *v13; // rcx
  float v14; // xmm1_4
  __int64 result; // rax

  v6 = *(float **)a5;
  v7 = *(_DWORD *)(a5 + 8);
  if ( a3 <= **(float **)a5 )
    a3 = *v6;
  if ( v6[v7 - 1] <= a4 )
    a4 = v6[v7 - 1];
  if ( a3 > *v6 )
    *v6 = a3;
  v8 = 0;
  v9 = 1;
  v10 = 1;
  if ( v7 > 1 )
  {
    v11 = 1LL;
    v12 = 1LL;
    v13 = v6;
    do
    {
      v14 = v6[v11];
      if ( a2 <= (float)(v14 - a3) )
      {
        if ( a2 > (float)(a4 - v14) )
          break;
        if ( a2 <= (float)(v14 - *v13) )
        {
          if ( v12 != v11 )
            v6[v12] = v14;
          ++v9;
          ++v12;
          ++v13;
          v8 = 0;
        }
        else
        {
          ++v8;
          v6[v12] = v14;
          if ( v8 == 1 )
          {
            ++v9;
            ++v12;
            ++v13;
          }
        }
      }
      ++v10;
      ++v11;
    }
    while ( v10 < v7 );
  }
  result = (unsigned int)(v9 - 1);
  if ( (float)(a4 - v6[(int)result]) >= a2 )
  {
    result = v9++;
    v6[result] = a4;
  }
  *(_DWORD *)(a5 + 8) = v9;
  *(_QWORD *)a5 = v6;
  return result;
}
